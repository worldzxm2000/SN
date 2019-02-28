#include "ControlUI.h"
#include<QMessageBox>
ControlUI::ControlUI(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::WindowCloseButtonHint | Qt::FramelessWindowHint);
	ui.CloseBtn->setToolTipName(QString::fromLocal8Bit("关闭"));
	ui.MinBtn->setToolTipName(QString::fromLocal8Bit("最小化"));
	QDateTime time = QDateTime::currentDateTime();
	ui.RdateTimeEdit->setDateTime(time);
	connect(ui.MinBtn, SIGNAL(clicked()), this, SLOT(slot_minWindow()));
	connect(ui.CloseBtn, SIGNAL(clicked()), this, SLOT(close()));
}

ControlUI::~ControlUI()
{
}

void ControlUI::closeEvent(QCloseEvent *event)
{
	QWidget::close();
	*isActive = false;
	delete this;
}

void ControlUI::slot_minWindow()
{
	this->showMinimized();
}

void ControlUI::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		m_Drag = true;
		m_DragPosition = event->globalPos() - this->pos();
		event->accept();
	}
}

void ControlUI::mouseMoveEvent(QMouseEvent *event)
{
	if (m_Drag && (event->buttons() && Qt::LeftButton)) {
		move(event->globalPos() - m_DragPosition);
		event->accept();
	}
}

void ControlUI::mouseReleaseEvent(QMouseEvent *event)
{
	m_Drag = false;
}



void ControlUI::on_RTimeBtn_clicked()
{
	cmmIndex = 1901;
	//读取时钟
	QString Comm = "DATETIME\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WTimeBtn_clicked()
{
	cmmIndex = 1902;
	//设置时钟
	QString Time;
	Time = ui.RdateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm:ss");
	QString Comm = "DATETIME " + Time + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_RIDBtn_clicked()
{
	cmmIndex = 1903;
	//读取ID
	QString Comm = "ID\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WIDBtn_clicked()
{
	cmmIndex = 1904;
	//设置ID
	QString Comm = "ID " + ui.DevicelineEdit->text().trimmed() + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}
void ControlUI::on_RRESETBtn_clicked()
{
	cmmIndex = 1906;
	//重启采集器
	QString Comm = "RESET\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_RUPDATEBtn_clicked()
{
	cmmIndex = 1907;
	//远程升级
	QString Comm = "UPDATE\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_RSensor1Btn_clicked()
{
	cmmIndex = 1908;
	//传感器参数读取
	QString Comm = "SET\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WSensor1Btn_clicked()
{
	cmmIndex = 1909;
	//传感器参数设置
	QString Comm = "SET "+ui.LineEdit_Sensor1->text()+"\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_RSensor2Btn_clicked()
{
	cmmIndex = 1910;
	//传感器参数2读取
	QString Comm = "SET2\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WSensor2Btn_clicked()
{
	cmmIndex = 1911;
	//传感器参数2设置
	QString Comm = "SET2 " + ui.LineEdit_Sensor1->text() + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WCalibrationBtn_clicked()
{
	cmmIndex = 1912;
	//扫描区域的标定
	QString Comm = "CALIBRATE " + ui.LineEdit_Sensor1->text() + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WPointScanBtn_clicked()
{
	cmmIndex = 1913;
	//手动单点扫描
	QString Comm = "HANDPOINT " + ui.LineEdit_Sensor1->text() + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_RangeScanBtn_clicked()
{
	cmmIndex = 1914;
	//手动区域扫描
	QString Comm = "HANDAREA " + ui.LineEdit_Sensor1->text() + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_ScanResultBtn_clicked()
{
	cmmIndex = 1915;
	//区域扫描结果
	QString Comm = "HANDAREAVALUE\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

void ControlUI::on_WCloudReSetBtn_clicked()
{
	cmmIndex = 1916;
	//云台复位
	QString Comm = "PLATEREST\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}
void ControlUI::on_DownBtn_clicked()
{
	cmmIndex = 1917;
	//补抄
	QString Time_B;
	Time_B = ui.BdateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm");
	QString Comm = "DMTD " + Time_B + " 1\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

//设备返回值
void ControlUI::setValue(QStringList list)
{
	switch (cmmIndex)
	{
	
	case 1901://设备时间
	{
		if (list.count() < 1)
			break;
		QDateTime time = QDateTime::fromString(list.at(0), "yyyy-MM-dd hh:mm:ss");
		ui.RdateTimeEdit->setDateTime(time);
		break;
	}
	case 1903://设备号
	{
		if (list.count() < 1)
			break;
		ui.DevicelineEdit->setText(list.at(0));
		break;
	}
	case 1908://传感器参数1
	{
		if (list.count() < 1)
			break;
		ui.LineEdit_Sensor1->setText(list.at(0));
		break;
	}
	case 1910://传感器参数2
	{
		if (list.count() < 1)
			break;
		ui.LineEdit_Sensor2->setText(list.at(0));
		break;
	}
	case 1913://手动单点扫描
	{
		cmmIndex = 0;
		if (list.count() < 1)
			break;
		break;
	}
	case 1914://手动区域扫描
	{
		cmmIndex = 0;
		if (list.count() < 1)
			break;
		break;
	}
	case 1915://区域扫描结果
	{
		cmmIndex = 0;
		if (list.count() < 1)
			break;
		break;
	}
	case 0://重置
		break;
	default:
	{
		if (list.count() < 1)
			break;
		QString r = list.at(0);
		if (r.toUpper().compare("T") == 0)
		{
			QMessageBox::about(this, QString::fromLocal8Bit("设备状态"), QString::fromLocal8Bit("操作成功！"));
		}
		else
		{
			QMessageBox::about(this, QString::fromLocal8Bit("设备状态"), QString::fromLocal8Bit("操作失败！"));
		}
	}
	break;
	}
}


