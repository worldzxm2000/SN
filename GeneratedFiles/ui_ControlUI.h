/********************************************************************************
** Form generated from reading UI file 'ControlUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLUI_H
#define UI_CONTROLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "MyButton.h"
QT_BEGIN_NAMESPACE

class Ui_ControlUI
{
public:
    QGroupBox *groupBox_2;
    QLabel *TitleLabel_Image;
    QGroupBox *groupBox_WND;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *ScrollAreaWidgetContents_MinBtn;
	MyButton *MinBtn;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *ScrollAreaWidgetContents_CloseBtn;
	MyButton *CloseBtn;
    QLabel *TitleLabel_Name;
    QGroupBox *groupBox;
    QGroupBox *groupBox_down;
    QDateTimeEdit *BdateTimeEdit;
    QDateTimeEdit *EdateTimeEdit;
    QPushButton *DownBtn;
    QGroupBox *groupBox_Sensor1;
    QPushButton *RSensor1Btn;
    QPushButton *WSensor1Btn;
    QLineEdit *LineEdit_Sensor1;
    QGroupBox *groupBox_time;
    QDateTimeEdit *RdateTimeEdit;
    QPushButton *RTimeBtn;
    QPushButton *WTimeBtn;
    QGroupBox *groupBox_Calibration;
    QPushButton *WCalibrationBtn;
    QLineEdit *LineEdit_Calibration;
    QGroupBox *groupBox_UPDATE;
    QPushButton *RUPDATEBtn;
    QGroupBox *groupBox_RESET;
    QPushButton *RRESETBtn;
    QGroupBox *groupBox_Sensor2;
    QPushButton *RSensor2Btn;
    QPushButton *WSensor2Btn;
    QLineEdit *LineEdit_Sensor2;
    QGroupBox *groupBox_ID;
    QPushButton *RIDBtn;
    QPushButton *WIDBtn;
    QLineEdit *DevicelineEdit;
    QGroupBox *groupBox_PointScan;
    QPushButton *WPointScanBtn;
    QLineEdit *LineEdit_PointScan;
    QGroupBox *groupBox_Cloud;
    QPushButton *WCloudReSetBtn;
    QGroupBox *groupBox_RangeScan;
    QPushButton *RangeScanBtn;
    QGroupBox *groupBox_ScanResult;
    QPushButton *ScanResultBtn;

    void setupUi(QWidget *ControlUI)
    {
        if (ControlUI->objectName().isEmpty())
            ControlUI->setObjectName(QStringLiteral("ControlUI"));
        ControlUI->resize(576, 478);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ControlUI->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../Image/png/Weather.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ControlUI->setWindowIcon(icon);
        ControlUI->setStyleSheet(QStringLiteral("background:rgb(77,77,77);color:white"));
        groupBox_2 = new QGroupBox(ControlUI);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(2, 2, 571, 471));
        TitleLabel_Image = new QLabel(groupBox_2);
        TitleLabel_Image->setObjectName(QStringLiteral("TitleLabel_Image"));
        TitleLabel_Image->setGeometry(QRect(10, 5, 32, 32));
        QFont font1;
        TitleLabel_Image->setFont(font1);
        TitleLabel_Image->setPixmap(QPixmap(QString::fromUtf8("../Image/png/control.png")));
        groupBox_WND = new QGroupBox(groupBox_2);
        groupBox_WND->setObjectName(QStringLiteral("groupBox_WND"));
        groupBox_WND->setGeometry(QRect(510, 10, 46, 26));
        groupBox_WND->setFont(font1);
        ScrollArea_MinBtn = new QScrollArea(groupBox_WND);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(2, 3, 20, 20));
        ScrollArea_MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_MinBtn = new QWidget();
        ScrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_MinBtn"));
        ScrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
		MinBtn = new MyButton("../Image/png/Mini.png", 1, ScrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 18, 18));
        MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidget(ScrollAreaWidgetContents_MinBtn);
        ScrollArea_CloseBtn = new QScrollArea(groupBox_WND);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(24, 3, 20, 20));
        ScrollArea_CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_CloseBtn = new QWidget();
        ScrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_CloseBtn"));
        ScrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
		CloseBtn = new MyButton("../Image/png/Close.png", 1, ScrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 18, 18));
        CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidget(ScrollAreaWidgetContents_CloseBtn);
        TitleLabel_Name = new QLabel(groupBox_2);
        TitleLabel_Name->setObjectName(QStringLiteral("TitleLabel_Name"));
        TitleLabel_Name->setGeometry(QRect(50, 10, 111, 16));
        TitleLabel_Name->setFont(font1);
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 551, 421));
        groupBox_down = new QGroupBox(groupBox);
        groupBox_down->setObjectName(QStringLiteral("groupBox_down"));
        groupBox_down->setGeometry(QRect(250, 320, 291, 91));
        groupBox_down->setFont(font1);
        BdateTimeEdit = new QDateTimeEdit(groupBox_down);
        BdateTimeEdit->setObjectName(QStringLiteral("BdateTimeEdit"));
        BdateTimeEdit->setGeometry(QRect(10, 20, 151, 22));
        BdateTimeEdit->setFont(font);
        BdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        EdateTimeEdit = new QDateTimeEdit(groupBox_down);
        EdateTimeEdit->setObjectName(QStringLiteral("EdateTimeEdit"));
        EdateTimeEdit->setGeometry(QRect(10, 50, 151, 22));
        EdateTimeEdit->setFont(font);
        EdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        DownBtn = new QPushButton(groupBox_down);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));
        DownBtn->setGeometry(QRect(210, 20, 75, 23));
        DownBtn->setFont(font);
        groupBox_Sensor1 = new QGroupBox(groupBox);
        groupBox_Sensor1->setObjectName(QStringLiteral("groupBox_Sensor1"));
        groupBox_Sensor1->setGeometry(QRect(370, 10, 171, 91));
        groupBox_Sensor1->setFont(font1);
        RSensor1Btn = new QPushButton(groupBox_Sensor1);
        RSensor1Btn->setObjectName(QStringLiteral("RSensor1Btn"));
        RSensor1Btn->setGeometry(QRect(10, 50, 75, 23));
        RSensor1Btn->setFont(font);
        WSensor1Btn = new QPushButton(groupBox_Sensor1);
        WSensor1Btn->setObjectName(QStringLiteral("WSensor1Btn"));
        WSensor1Btn->setGeometry(QRect(90, 50, 75, 23));
        WSensor1Btn->setFont(font);
        LineEdit_Sensor1 = new QLineEdit(groupBox_Sensor1);
        LineEdit_Sensor1->setObjectName(QStringLiteral("LineEdit_Sensor1"));
        LineEdit_Sensor1->setGeometry(QRect(10, 20, 151, 20));
        LineEdit_Sensor1->setFont(font);
        groupBox_time = new QGroupBox(groupBox);
        groupBox_time->setObjectName(QStringLiteral("groupBox_time"));
        groupBox_time->setGeometry(QRect(190, 10, 171, 91));
        groupBox_time->setFont(font1);
        RdateTimeEdit = new QDateTimeEdit(groupBox_time);
        RdateTimeEdit->setObjectName(QStringLiteral("RdateTimeEdit"));
        RdateTimeEdit->setGeometry(QRect(10, 20, 151, 22));
        RdateTimeEdit->setFont(font);
        RdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        RTimeBtn = new QPushButton(groupBox_time);
        RTimeBtn->setObjectName(QStringLiteral("RTimeBtn"));
        RTimeBtn->setGeometry(QRect(10, 50, 75, 23));
        RTimeBtn->setFont(font);
        WTimeBtn = new QPushButton(groupBox_time);
        WTimeBtn->setObjectName(QStringLiteral("WTimeBtn"));
        WTimeBtn->setGeometry(QRect(90, 50, 75, 23));
        WTimeBtn->setFont(font);
        groupBox_Calibration = new QGroupBox(groupBox);
        groupBox_Calibration->setObjectName(QStringLiteral("groupBox_Calibration"));
        groupBox_Calibration->setGeometry(QRect(190, 110, 171, 91));
        groupBox_Calibration->setFont(font1);
        WCalibrationBtn = new QPushButton(groupBox_Calibration);
        WCalibrationBtn->setObjectName(QStringLiteral("WCalibrationBtn"));
        WCalibrationBtn->setGeometry(QRect(10, 50, 75, 23));
        WCalibrationBtn->setFont(font);
        LineEdit_Calibration = new QLineEdit(groupBox_Calibration);
        LineEdit_Calibration->setObjectName(QStringLiteral("LineEdit_Calibration"));
        LineEdit_Calibration->setGeometry(QRect(10, 20, 151, 20));
        LineEdit_Calibration->setFont(font);
        groupBox_UPDATE = new QGroupBox(groupBox);
        groupBox_UPDATE->setObjectName(QStringLiteral("groupBox_UPDATE"));
        groupBox_UPDATE->setGeometry(QRect(160, 210, 91, 91));
        groupBox_UPDATE->setFont(font1);
        RUPDATEBtn = new QPushButton(groupBox_UPDATE);
        RUPDATEBtn->setObjectName(QStringLiteral("RUPDATEBtn"));
        RUPDATEBtn->setGeometry(QRect(10, 40, 75, 23));
        RUPDATEBtn->setFont(font);
        groupBox_RESET = new QGroupBox(groupBox);
        groupBox_RESET->setObjectName(QStringLiteral("groupBox_RESET"));
        groupBox_RESET->setGeometry(QRect(10, 210, 91, 91));
        groupBox_RESET->setFont(font1);
        RRESETBtn = new QPushButton(groupBox_RESET);
        RRESETBtn->setObjectName(QStringLiteral("RRESETBtn"));
        RRESETBtn->setGeometry(QRect(10, 40, 75, 23));
        RRESETBtn->setFont(font);
        groupBox_Sensor2 = new QGroupBox(groupBox);
        groupBox_Sensor2->setObjectName(QStringLiteral("groupBox_Sensor2"));
        groupBox_Sensor2->setGeometry(QRect(10, 110, 171, 91));
        groupBox_Sensor2->setFont(font1);
        RSensor2Btn = new QPushButton(groupBox_Sensor2);
        RSensor2Btn->setObjectName(QStringLiteral("RSensor2Btn"));
        RSensor2Btn->setGeometry(QRect(10, 50, 75, 23));
        RSensor2Btn->setFont(font);
        WSensor2Btn = new QPushButton(groupBox_Sensor2);
        WSensor2Btn->setObjectName(QStringLiteral("WSensor2Btn"));
        WSensor2Btn->setGeometry(QRect(90, 50, 75, 23));
        WSensor2Btn->setFont(font);
        LineEdit_Sensor2 = new QLineEdit(groupBox_Sensor2);
        LineEdit_Sensor2->setObjectName(QStringLiteral("LineEdit_Sensor2"));
        LineEdit_Sensor2->setGeometry(QRect(10, 20, 151, 20));
        LineEdit_Sensor2->setFont(font);
        groupBox_ID = new QGroupBox(groupBox);
        groupBox_ID->setObjectName(QStringLiteral("groupBox_ID"));
        groupBox_ID->setGeometry(QRect(10, 10, 171, 91));
        groupBox_ID->setFont(font1);
        RIDBtn = new QPushButton(groupBox_ID);
        RIDBtn->setObjectName(QStringLiteral("RIDBtn"));
        RIDBtn->setGeometry(QRect(10, 50, 75, 23));
        RIDBtn->setFont(font);
        WIDBtn = new QPushButton(groupBox_ID);
        WIDBtn->setObjectName(QStringLiteral("WIDBtn"));
        WIDBtn->setGeometry(QRect(90, 50, 75, 23));
        WIDBtn->setFont(font);
        DevicelineEdit = new QLineEdit(groupBox_ID);
        DevicelineEdit->setObjectName(QStringLiteral("DevicelineEdit"));
        DevicelineEdit->setGeometry(QRect(10, 20, 151, 20));
        DevicelineEdit->setFont(font);
        groupBox_PointScan = new QGroupBox(groupBox);
        groupBox_PointScan->setObjectName(QStringLiteral("groupBox_PointScan"));
        groupBox_PointScan->setGeometry(QRect(370, 110, 171, 91));
        groupBox_PointScan->setFont(font1);
        WPointScanBtn = new QPushButton(groupBox_PointScan);
        WPointScanBtn->setObjectName(QStringLiteral("WPointScanBtn"));
        WPointScanBtn->setGeometry(QRect(10, 50, 75, 23));
        WPointScanBtn->setFont(font);
        LineEdit_PointScan = new QLineEdit(groupBox_PointScan);
        LineEdit_PointScan->setObjectName(QStringLiteral("LineEdit_PointScan"));
        LineEdit_PointScan->setGeometry(QRect(10, 20, 151, 20));
        LineEdit_PointScan->setFont(font);
        groupBox_Cloud = new QGroupBox(groupBox);
        groupBox_Cloud->setObjectName(QStringLiteral("groupBox_Cloud"));
        groupBox_Cloud->setGeometry(QRect(310, 210, 91, 91));
        groupBox_Cloud->setFont(font1);
        WCloudReSetBtn = new QPushButton(groupBox_Cloud);
        WCloudReSetBtn->setObjectName(QStringLiteral("WCloudReSetBtn"));
        WCloudReSetBtn->setGeometry(QRect(10, 40, 75, 23));
        WCloudReSetBtn->setFont(font);
        groupBox_RangeScan = new QGroupBox(groupBox);
        groupBox_RangeScan->setObjectName(QStringLiteral("groupBox_RangeScan"));
        groupBox_RangeScan->setGeometry(QRect(450, 210, 91, 91));
        groupBox_RangeScan->setFont(font1);
        RangeScanBtn = new QPushButton(groupBox_RangeScan);
        RangeScanBtn->setObjectName(QStringLiteral("RangeScanBtn"));
        RangeScanBtn->setGeometry(QRect(10, 40, 75, 23));
        RangeScanBtn->setFont(font);
        groupBox_ScanResult = new QGroupBox(groupBox);
        groupBox_ScanResult->setObjectName(QStringLiteral("groupBox_ScanResult"));
        groupBox_ScanResult->setGeometry(QRect(10, 320, 91, 91));
        groupBox_ScanResult->setFont(font1);
        ScanResultBtn = new QPushButton(groupBox_ScanResult);
        ScanResultBtn->setObjectName(QStringLiteral("ScanResultBtn"));
        ScanResultBtn->setGeometry(QRect(10, 40, 75, 23));
        ScanResultBtn->setFont(font);
        QWidget::setTabOrder(DevicelineEdit, RIDBtn);
        QWidget::setTabOrder(RIDBtn, WIDBtn);
        QWidget::setTabOrder(WIDBtn, RdateTimeEdit);
        QWidget::setTabOrder(RdateTimeEdit, RTimeBtn);
        QWidget::setTabOrder(RTimeBtn, WTimeBtn);
        QWidget::setTabOrder(WTimeBtn, LineEdit_Sensor1);
        QWidget::setTabOrder(LineEdit_Sensor1, RSensor1Btn);
        QWidget::setTabOrder(RSensor1Btn, WSensor1Btn);
        QWidget::setTabOrder(WSensor1Btn, LineEdit_Sensor2);
        QWidget::setTabOrder(LineEdit_Sensor2, RSensor2Btn);
        QWidget::setTabOrder(RSensor2Btn, WSensor2Btn);
        QWidget::setTabOrder(WSensor2Btn, LineEdit_Calibration);
        QWidget::setTabOrder(LineEdit_Calibration, WCalibrationBtn);
        QWidget::setTabOrder(WCalibrationBtn, RRESETBtn);
        QWidget::setTabOrder(RRESETBtn, RUPDATEBtn);
        QWidget::setTabOrder(RUPDATEBtn, BdateTimeEdit);
        QWidget::setTabOrder(BdateTimeEdit, EdateTimeEdit);
        QWidget::setTabOrder(EdateTimeEdit, DownBtn);
        QWidget::setTabOrder(DownBtn, MinBtn);
        QWidget::setTabOrder(MinBtn, CloseBtn);
        QWidget::setTabOrder(CloseBtn, ScrollArea_MinBtn);
        QWidget::setTabOrder(ScrollArea_MinBtn, ScrollArea_CloseBtn);

        retranslateUi(ControlUI);

        QMetaObject::connectSlotsByName(ControlUI);
    } // setupUi

    void retranslateUi(QWidget *ControlUI)
    {
        ControlUI->setWindowTitle(QApplication::translate("ControlUI", "\345\206\234\344\270\232\346\260\224\350\261\241\350\247\202\346\265\213\344\273\252\350\256\276\345\244\207\346\216\247\345\210\266", nullptr));
        groupBox_2->setTitle(QString());
        TitleLabel_Image->setText(QString());
        groupBox_WND->setTitle(QString());
        MinBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        CloseBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        TitleLabel_Name->setText(QApplication::translate("ControlUI", "\345\206\234\344\270\232\346\260\224\350\261\241\350\247\202\346\265\213\344\273\252", nullptr));
        groupBox->setTitle(QString());
        groupBox_down->setTitle(QApplication::translate("ControlUI", "\346\225\260\346\215\256\350\241\245\346\212\204", nullptr));
        DownBtn->setText(QApplication::translate("ControlUI", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
        groupBox_Sensor1->setTitle(QApplication::translate("ControlUI", "\344\274\240\346\204\237\345\231\2501(7\345\217\202\346\225\260)", nullptr));
        RSensor1Btn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226", nullptr));
        WSensor1Btn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256", nullptr));
        LineEdit_Sensor1->setText(QString());
        groupBox_time->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207\346\227\266\351\227\264", nullptr));
        RTimeBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\346\227\266\351\222\237", nullptr));
        WTimeBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\346\227\266\351\222\237", nullptr));
        groupBox_Calibration->setTitle(QApplication::translate("ControlUI", "\346\211\253\346\217\217\345\214\272\345\237\237\346\240\207\345\256\232(4\345\217\202\346\225\260)", nullptr));
        WCalibrationBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256", nullptr));
        groupBox_UPDATE->setTitle(QApplication::translate("ControlUI", "\350\277\234\347\250\213\345\215\207\347\272\247", nullptr));
        RUPDATEBtn->setText(QApplication::translate("ControlUI", "\345\274\200\345\247\213", nullptr));
        groupBox_RESET->setTitle(QApplication::translate("ControlUI", "\351\207\207\351\233\206\345\231\250", nullptr));
        RRESETBtn->setText(QApplication::translate("ControlUI", "\351\207\215\345\220\257", nullptr));
        groupBox_Sensor2->setTitle(QApplication::translate("ControlUI", "\344\274\240\346\204\237\345\231\2502(2\345\217\202\346\225\260)", nullptr));
        RSensor2Btn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226", nullptr));
        WSensor2Btn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256", nullptr));
        groupBox_ID->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207\345\217\267", nullptr));
        RIDBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\350\256\276\345\244\207\345\217\267", nullptr));
        WIDBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\350\256\276\345\244\207\345\217\267", nullptr));
        groupBox_PointScan->setTitle(QApplication::translate("ControlUI", "\346\211\213\345\212\250\345\215\225\347\202\271\346\211\253\346\217\217(2\345\217\202\346\225\260)", nullptr));
        WPointScanBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256", nullptr));
        groupBox_Cloud->setTitle(QApplication::translate("ControlUI", "\344\272\221\345\217\260", nullptr));
        WCloudReSetBtn->setText(QApplication::translate("ControlUI", "\345\244\215\344\275\215", nullptr));
        groupBox_RangeScan->setTitle(QApplication::translate("ControlUI", "\346\211\213\345\212\250\345\214\272\345\237\237\346\211\253\346\217\217", nullptr));
        RangeScanBtn->setText(QApplication::translate("ControlUI", "\345\274\200\345\247\213", nullptr));
        groupBox_ScanResult->setTitle(QApplication::translate("ControlUI", "\345\214\272\345\237\237\346\211\253\346\217\217\347\273\223\346\236\234", nullptr));
        ScanResultBtn->setText(QApplication::translate("ControlUI", "\344\270\213\350\275\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlUI: public Ui_ControlUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLUI_H
