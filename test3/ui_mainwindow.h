/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pb_three;
    QPushButton *pb_nine;
    QPushButton *pb_two;
    QPushButton *pb_five;
    QPushButton *pb_equal;
    QPushButton *pb_minus;
    QPushButton *pb_dot;
    QPushButton *pb_six;
    QPushButton *pb_multi;
    QPushButton *pb_zero;
    QPushButton *pb_one;
    QPushButton *pb_four;
    QPushButton *pb_plus;
    QPushButton *pb_seven;
    QPushButton *pb_eight;
    QPushButton *pb_divide;
    QLCDNumber *screen;
    QPushButton *pb_clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(649, 611);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 110, 471, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pb_three = new QPushButton(gridLayoutWidget);
        pb_three->setObjectName(QString::fromUtf8("pb_three"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_three->sizePolicy().hasHeightForWidth());
        pb_three->setSizePolicy(sizePolicy);
        pb_three->setMinimumSize(QSize(0, 0));
        pb_three->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_three, 3, 2, 1, 1);

        pb_nine = new QPushButton(gridLayoutWidget);
        pb_nine->setObjectName(QString::fromUtf8("pb_nine"));
        sizePolicy.setHeightForWidth(pb_nine->sizePolicy().hasHeightForWidth());
        pb_nine->setSizePolicy(sizePolicy);
        pb_nine->setMinimumSize(QSize(0, 0));
        pb_nine->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_nine, 0, 2, 1, 1);

        pb_two = new QPushButton(gridLayoutWidget);
        pb_two->setObjectName(QString::fromUtf8("pb_two"));
        sizePolicy.setHeightForWidth(pb_two->sizePolicy().hasHeightForWidth());
        pb_two->setSizePolicy(sizePolicy);
        pb_two->setMinimumSize(QSize(0, 0));
        pb_two->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_two, 3, 1, 1, 1);

        pb_five = new QPushButton(gridLayoutWidget);
        pb_five->setObjectName(QString::fromUtf8("pb_five"));
        sizePolicy.setHeightForWidth(pb_five->sizePolicy().hasHeightForWidth());
        pb_five->setSizePolicy(sizePolicy);
        pb_five->setMinimumSize(QSize(0, 0));
        pb_five->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_five, 2, 1, 1, 1);

        pb_equal = new QPushButton(gridLayoutWidget);
        pb_equal->setObjectName(QString::fromUtf8("pb_equal"));
        sizePolicy.setHeightForWidth(pb_equal->sizePolicy().hasHeightForWidth());
        pb_equal->setSizePolicy(sizePolicy);
        pb_equal->setMinimumSize(QSize(0, 0));
        pb_equal->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_equal, 5, 0, 1, 1);

        pb_minus = new QPushButton(gridLayoutWidget);
        pb_minus->setObjectName(QString::fromUtf8("pb_minus"));
        sizePolicy.setHeightForWidth(pb_minus->sizePolicy().hasHeightForWidth());
        pb_minus->setSizePolicy(sizePolicy);
        pb_minus->setMinimumSize(QSize(0, 0));
        pb_minus->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_minus, 2, 3, 1, 1);

        pb_dot = new QPushButton(gridLayoutWidget);
        pb_dot->setObjectName(QString::fromUtf8("pb_dot"));
        sizePolicy.setHeightForWidth(pb_dot->sizePolicy().hasHeightForWidth());
        pb_dot->setSizePolicy(sizePolicy);
        pb_dot->setMinimumSize(QSize(0, 0));
        pb_dot->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_dot, 5, 2, 1, 1);

        pb_six = new QPushButton(gridLayoutWidget);
        pb_six->setObjectName(QString::fromUtf8("pb_six"));
        sizePolicy.setHeightForWidth(pb_six->sizePolicy().hasHeightForWidth());
        pb_six->setSizePolicy(sizePolicy);
        pb_six->setMinimumSize(QSize(0, 0));
        pb_six->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_six, 2, 2, 1, 1);

        pb_multi = new QPushButton(gridLayoutWidget);
        pb_multi->setObjectName(QString::fromUtf8("pb_multi"));
        sizePolicy.setHeightForWidth(pb_multi->sizePolicy().hasHeightForWidth());
        pb_multi->setSizePolicy(sizePolicy);
        pb_multi->setMinimumSize(QSize(0, 0));
        pb_multi->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_multi, 3, 3, 1, 1);

        pb_zero = new QPushButton(gridLayoutWidget);
        pb_zero->setObjectName(QString::fromUtf8("pb_zero"));
        sizePolicy.setHeightForWidth(pb_zero->sizePolicy().hasHeightForWidth());
        pb_zero->setSizePolicy(sizePolicy);
        pb_zero->setMinimumSize(QSize(0, 0));
        pb_zero->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_zero, 5, 1, 1, 1);

        pb_one = new QPushButton(gridLayoutWidget);
        pb_one->setObjectName(QString::fromUtf8("pb_one"));
        sizePolicy.setHeightForWidth(pb_one->sizePolicy().hasHeightForWidth());
        pb_one->setSizePolicy(sizePolicy);
        pb_one->setMinimumSize(QSize(0, 0));
        pb_one->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_one, 3, 0, 1, 1);

        pb_four = new QPushButton(gridLayoutWidget);
        pb_four->setObjectName(QString::fromUtf8("pb_four"));
        sizePolicy.setHeightForWidth(pb_four->sizePolicy().hasHeightForWidth());
        pb_four->setSizePolicy(sizePolicy);
        pb_four->setMinimumSize(QSize(0, 0));
        pb_four->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_four, 2, 0, 1, 1);

        pb_plus = new QPushButton(gridLayoutWidget);
        pb_plus->setObjectName(QString::fromUtf8("pb_plus"));
        sizePolicy.setHeightForWidth(pb_plus->sizePolicy().hasHeightForWidth());
        pb_plus->setSizePolicy(sizePolicy);
        pb_plus->setMinimumSize(QSize(0, 0));
        pb_plus->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));
        pb_plus->setFlat(false);

        gridLayout->addWidget(pb_plus, 0, 3, 1, 1);

        pb_seven = new QPushButton(gridLayoutWidget);
        pb_seven->setObjectName(QString::fromUtf8("pb_seven"));
        sizePolicy.setHeightForWidth(pb_seven->sizePolicy().hasHeightForWidth());
        pb_seven->setSizePolicy(sizePolicy);
        pb_seven->setMinimumSize(QSize(0, 0));
        pb_seven->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_seven, 0, 0, 1, 1);

        pb_eight = new QPushButton(gridLayoutWidget);
        pb_eight->setObjectName(QString::fromUtf8("pb_eight"));
        sizePolicy.setHeightForWidth(pb_eight->sizePolicy().hasHeightForWidth());
        pb_eight->setSizePolicy(sizePolicy);
        pb_eight->setMinimumSize(QSize(0, 0));
        pb_eight->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_eight, 0, 1, 1, 1);

        pb_divide = new QPushButton(gridLayoutWidget);
        pb_divide->setObjectName(QString::fromUtf8("pb_divide"));
        sizePolicy.setHeightForWidth(pb_divide->sizePolicy().hasHeightForWidth());
        pb_divide->setSizePolicy(sizePolicy);
        pb_divide->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));

        gridLayout->addWidget(pb_divide, 5, 3, 1, 1);

        screen = new QLCDNumber(centralWidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(40, 20, 561, 71));
        screen->setMaximumSize(QSize(561, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        screen->setFont(font);
        screen->setLayoutDirection(Qt::RightToLeft);
        screen->setStyleSheet(QString::fromUtf8(""));
        screen->setFrameShape(QFrame::WinPanel);
        screen->setFrameShadow(QFrame::Sunken);
        screen->setLineWidth(1);
        screen->setMidLineWidth(0);
        screen->setSmallDecimalPoint(true);
        screen->setDigitCount(10);
        screen->setMode(QLCDNumber::Dec);
        pb_clear = new QPushButton(centralWidget);
        pb_clear->setObjectName(QString::fromUtf8("pb_clear"));
        pb_clear->setGeometry(QRect(20, 220, 101, 211));
        pb_clear->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pb_plus->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pb_three->setText(QApplication::translate("MainWindow", "3", nullptr));
        pb_nine->setText(QApplication::translate("MainWindow", "9", nullptr));
        pb_two->setText(QApplication::translate("MainWindow", "2", nullptr));
        pb_five->setText(QApplication::translate("MainWindow", "5", nullptr));
        pb_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        pb_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pb_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pb_six->setText(QApplication::translate("MainWindow", "6", nullptr));
        pb_multi->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        pb_zero->setText(QApplication::translate("MainWindow", "0", nullptr));
        pb_one->setText(QApplication::translate("MainWindow", "1", nullptr));
        pb_four->setText(QApplication::translate("MainWindow", "4", nullptr));
        pb_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pb_seven->setText(QApplication::translate("MainWindow", "7", nullptr));
        pb_eight->setText(QApplication::translate("MainWindow", "8", nullptr));
        pb_divide->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
#ifndef QT_NO_TOOLTIP
        screen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\"><br/></span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pb_clear->setText(QApplication::translate("MainWindow", "Ac", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
