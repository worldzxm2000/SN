#pragma once

#include<WinSock2.h>
#include<Windows.h>
#include <QWidget>
#include "ui_ControlUI.h"
#include<QMouseEvent>
class ControlUI : public QWidget
{
	Q_OBJECT

public:
	ControlUI(QWidget *parent = Q_NULLPTR);
	~ControlUI();
	uint Socket;//Socket号
	void setValue(QStringList list);//返回值
	bool *isActive;//判断窗体是否开启
private:
	Ui::ControlUI ui;
	int cmmIndex;//记录当前操作类型
				 //窗体移动
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	bool m_Drag;                //判断鼠标左键是否按下
	QPoint m_DragPosition;
protected:
    void closeEvent(QCloseEvent *event);
private slots:
	void slot_minWindow();
	void on_RIDBtn_clicked();
	void on_WIDBtn_clicked();
	void on_RTimeBtn_clicked();
	void on_WTimeBtn_clicked();
	void on_RRESETBtn_clicked();
	void on_RUPDATEBtn_clicked();
	void on_DownBtn_clicked();
    void on_RSensor1Btn_clicked();
    void on_WSensor1Btn_clicked();
    void on_RSensor2Btn_clicked();
    void on_WSensor2Btn_clicked();
    void on_WCalibrationBtn_clicked();
    void on_WPointScanBtn_clicked();
    void on_WCloudReSetBtn_clicked();
    void on_RangeScanBtn_clicked();
    void on_ScanResultBtn_clicked();
};
