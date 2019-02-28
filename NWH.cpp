#include "NWH.h"
#include"dictionary.h"
#include"qdatetime.h"
#include"qfile.h"
#include"qtextstream.h"
#include"qjsondocument.h"
#include "qdebug.h"
#include "qcoreapplication.h"
#include"qdir.h"

//获取业务号
int GetServiceTypeID()
{
	return 19;
}
//获取业务名称
QString GetServiceTypeName()
{
	QString name = QString::fromLocal8Bit("农业气象业务");
	return name;
}

//获取版本号
QString GetVersionNo()
{
	QString Version = QString::fromLocal8Bit("1.0");
	return Version;
}

//获取端口号
int GetPort()
{
	return 8012;
}
//解析数据
LRESULT Char2Json(QString &buff, QJsonObject &json)
{
	int Count = 0;//数据个数
	int Current_P = buff.length();//当前数据指

	 //遍历查找数据
	for (int i = 0; i < buff.length() - 2; i++)
	{
		if (buff[i].toUpper() == 'B' && buff[i + 1].toUpper() == 'G'&&buff[i + 2] == ',')
		{
			Current_P = i;//指针指向帧头
			for (int j = i + 2; j < buff.length() - 2; j++)
			{
				if (buff[j] == ','&&buff[j + 1].toUpper() == 'E'&&buff[j + 2].toUpper() == 'D')
				{
					Current_P = j + 3;//指针移动到帧尾下一个字符
					Dictionary dic;
					QString strBuff = buff.mid(i, j - i + 3);
					//根据“，”将字符串拆分成各个要素
					QStringList strlist = strBuff.split(",");
					QJsonObject json_one;
					json_one.insert("DataType", 1);//数据类型 观测数据

					//区站号
					json_one.insert("StationID", strlist.at(1));
					//19三农业务
					json_one.insert("ServiceTypeID", NW);
				
					//设备号
					json_one.insert("DeviceID", strlist.at(2));
			
					//数据来源
					json_one.insert("DataSourceID", 1);
				
					//时间
					QString time = Convert2Time(strlist.at(3));
					json_one.insert("ObserveTime", time);

					bool ok;
					//观察要素数量
					int CountOfFeature = ((QString)strlist.at(4)).toInt(&ok, 10);
					json_one.insert("CountOfFeature", CountOfFeature);
				
					//设备状态要素数量
					int CountOfFacilitiesStatus = ((QString)strlist.at(5)).toInt(&ok, 10);
					json_one.insert("CountOfFacilitiesStatus", CountOfFacilitiesStatus);
			
					//判断数据完整性
					if (strlist.count() < CountOfFeature * 2 + CountOfFacilitiesStatus * 2 + 7)
					{
						j++;
						continue;
					}
					Count += 1;//数据个数
					//观察要素
					QString strFeatureName;
					for (int i = 6; i < CountOfFeature * 2 + 6; i += 2)
					{
						QString SrcKey = QString(strlist.at(i)).toLower();
						QString key = dic.Find(SrcKey);
						if (key != NULL)
						{
							json_one.insert(key, strlist.at(i + 1));
							
							//质量控制码
							if (i == 6)
							{
								strFeatureName = key;
							}
							else
							{
								strFeatureName += ",";
								strFeatureName += key;
							}
						}
					}
					json_one.insert("StatusBitName", strFeatureName);
					//状态位
					json_one.insert("StatusBit", strlist.at(CountOfFeature * 2 + 6));

					//设备状态
					for (int i = CountOfFeature * 2 + 7; i < CountOfFeature * 2 + CountOfFacilitiesStatus * 2 + 7; i += 2)
					{
						QString key = dic.Find(QString(strlist.at(i)).toLower());
						if (key != NULL)
						{
							json_one.insert(key, strlist.at(i + 1));
						}

					}

					json.insert(QString::number(Count), json_one);
					QDateTime current_date_time = QDateTime::currentDateTime();
					QString current_date = current_date_time.toString("yyyy.MM.dd hh:mm:ss");
					QString current_day = current_date_time.toString("yyyy-MM-dd");
					QString fileName = QCoreApplication::applicationDirPath() + "\\NWH\\" + strlist.at(1) + "\\" + current_day;
					QDir dir(fileName);
					if (!dir.exists())
						dir.mkpath(fileName);//创建多级目录
					fileName += "\\data.txt";
					QFile file(fileName);

					if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
					{
					}
					QTextStream in(&file);
					in << current_date << "\r\n" << strBuff << "\r\n";
					file.close();

					i = j + 2;//当前循环
					break;
				}
			}
		}
		else if (buff[i] == '<')
		{
			Current_P = i;//指针指向帧头
			for (int j = i + 1; j < buff.length(); j++)
			{
				if (buff[j] == '>')
				{
					Current_P = j + 1;//指针移动到帧尾
					Count += 1;//数据个数
					QString subStr = buff.mid(i + 1, j - i - 1);
					QStringList strlist = subStr.split(",");
					QJsonObject SubJson;
					SubJson.insert("DataType", 2);//数据类型 2操作数据
					i = j;
					switch (strlist.count())
					{
						//返回值
					case 5:
					{
						SubJson.insert("ValueCount", 5);
						SubJson.insert("StationID", strlist.at(1));
						SubJson.insert("DeviceID", strlist.at(2));
						SubJson.insert("Command", strlist.at(3));
						SubJson.insert("RecvValue1", strlist.at(4));
						int comm = strlist.at(3).toInt();//判断云台扫描数据
						if (comm == 1913 || comm == 1914 || comm == 1915)
						{
							QDateTime current_date_time = QDateTime::currentDateTime();
							QString current_date = current_date_time.toString("yyyy.MM.dd hh:mm:ss");
							QString current_day = current_date_time.toString("yyyy-MM-dd");
							QString fileName = QCoreApplication::applicationDirPath() + "\\NWH\\Cloud\\" + strlist.at(1) + "\\" + current_day;;
							QDir dir(fileName);
							if (!dir.exists())
								dir.mkpath(fileName);//创建多级目录
							switch (comm)
							{
							case 1913:
								fileName += "\\HANDPOINT.txt";
								break;
							case 1914:
								fileName += "\\HANDAREA.txt";
								break;
							case 1915:
								fileName += "\\HANDAREAVALUE.txt";
								break;
							default:
								fileName += "\\data.txt";
								break;
							}

							QFile file(fileName);

							if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
							{
							}
							QTextStream in(&file);
							in << current_date << "\r\n" << strlist.at(4) << "\r\n";
							file.close();
						}
						json.insert(QString::number(Count), SubJson);
						break;
					}
					//无效数据
					default:
						break;
					}
					break;
				}
			}
		}
	}
	json.insert("DataLength", Count);//JSON数据个数
	if (Current_P > buff.length())//判断当前指针位置
	{
		buff.clear();
	}//清除内存
	else
	{
		buff.remove(0, Current_P-1);
	}//将剩余字节存入缓存
	return 1;
}

//字符串转成显示时间格式
QString Convert2Time(QString strTime)
{
	QString tmp;
	tmp = strTime.mid(0, 4) + "-" + strTime.mid(4, 2) + "-" + strTime.mid(6, 2) + " " + strTime.mid(8, 2) + ":" + strTime.mid(10, 2) + ":" + strTime.mid(12, 2);
	return tmp;
}

//调试窗体
void  GetControlWidget(QString StationID, uint Socket, QWidget* parent)
{
	if (isActive)
	{
		return;
	}
	control_ui = new ControlUI();
	isActive = true;
	control_ui->Socket = Socket;
	control_ui->isActive = &isActive;
	control_ui->show();
}
//矫正时钟
void SetTime(QString StationID, uint Socket)
{
	QDateTime nowtime = QDateTime::currentDateTime();
	QString datetime = nowtime.toString("yyyy-MM-dd hh:mm:ss");
	//设置时钟
	QString Comm = "DATETIME " + datetime + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}
//返回值反馈
void SetValueToControlWidget(QStringList list)
{
	if (control_ui == nullptr)
		return;
	if (isActive)
		control_ui->setValue(list);
}
//发送命令
void SetCommand(uint Socket, int CommandType, QString Params1, QString Params2, QString StationID)
{
	//设备终端命令
	QString Comm;

	switch (CommandType)
	{
	case 1901:
		//读取时钟
		Comm = "DATETIME\r\n";
		break;
	case 1902:
	{
		//设置时钟
		QDateTime nowtime = QDateTime::currentDateTime();
		QString datetime = nowtime.toString("yyyy-MM-dd hh:mm:ss");
		Comm = Comm = "DATETIME " + datetime + "\r\n";
	}
	break;
	case 1903:
		//读取ID
		Comm = "ID\r\n";
		break;
	case 1904:
		//设置ID
		Comm = "ID " + Params1 + "\r\n";
		break;
	case 1906:
		//重启采集器
		Comm = "RESET\r\n";
		break;
	case 1907:
		//远程升级
		Comm = "UPDATE\r\n";
		break;
	case 1908:
		//传感器参数读取
		Comm = "SET\r\n";
		break;
	case 1909:
		//传感器参数设置
		Comm = "SET " + Params1 + "\r\n";
		break;
	case 1910:
		//传感器参数2读取
		Comm = "SET2\r\n";
		break;
	case 1911:
		//传感器参数2设置
		Comm = "SET2 " + Params1 + "\r\n";
		break;
	case 1912:
		//扫描区域的标定
		Comm = "CALIBRATE " + Params1 + "\r\n";
		break;
	case 1913:
		//手动单点扫描
		Comm = "HANDPOINT " + Params1 + "\r\n";
		break;
	case 1914:
		//手动区域扫描
		Comm = "HANDAREA " + Params1 + "\r\n";
		break;
	case 1915:
		//区域扫描结果
		Comm = "HANDAREAVALUE\r\n";
		break;
	case 1916:
		//云台复位
		Comm = "PLATEREST\r\n";
		break;
	case 1917:
		//补抄
		Comm = "DMTD " + Params1 + " 1\r\n";//yyyy-MM-dd HH:mm
		break;

	default:
		break;
	}
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}