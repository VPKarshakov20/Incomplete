/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QLabel *cardbase1;
    QLabel *cardbase2;
    QLabel *cardbase3;
    QLabel *cardbase4;
    QLabel *cardbase5;
    QLabel *cardbase6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1001, 616);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, -10, 1001, 571));
        background->setPixmap(QPixmap(QString::fromUtf8("../assets/game field.png")));
        background->setScaledContents(true);
        cardbase1 = new QLabel(centralwidget);
        cardbase1->setObjectName(QString::fromUtf8("cardbase1"));
        cardbase1->setGeometry(QRect(280, 30, 51, 71));
        cardbase1->setPixmap(QPixmap(QString::fromUtf8("../assets/01 card.png")));
        cardbase1->setScaledContents(true);
        cardbase2 = new QLabel(centralwidget);
        cardbase2->setObjectName(QString::fromUtf8("cardbase2"));
        cardbase2->setGeometry(QRect(280, 100, 51, 71));
        cardbase2->setPixmap(QPixmap(QString::fromUtf8("../assets/01 card.png")));
        cardbase2->setScaledContents(true);
        cardbase3 = new QLabel(centralwidget);
        cardbase3->setObjectName(QString::fromUtf8("cardbase3"));
        cardbase3->setGeometry(QRect(280, 170, 51, 71));
        cardbase3->setPixmap(QPixmap(QString::fromUtf8("../assets/01 card.png")));
        cardbase3->setScaledContents(true);
        cardbase4 = new QLabel(centralwidget);
        cardbase4->setObjectName(QString::fromUtf8("cardbase4"));
        cardbase4->setGeometry(QRect(280, 240, 51, 71));
        cardbase4->setPixmap(QPixmap(QString::fromUtf8("../assets/01 card.png")));
        cardbase4->setScaledContents(true);
        cardbase5 = new QLabel(centralwidget);
        cardbase5->setObjectName(QString::fromUtf8("cardbase5"));
        cardbase5->setGeometry(QRect(280, 310, 51, 71));
        cardbase5->setPixmap(QPixmap(QString::fromUtf8("../assets/01 card.png")));
        cardbase5->setScaledContents(true);
        cardbase6 = new QLabel(centralwidget);
        cardbase6->setObjectName(QString::fromUtf8("cardbase6"));
        cardbase6->setGeometry(QRect(280, 380, 51, 71));
        cardbase6->setPixmap(QPixmap(QString::fromUtf8("../assets/01 card.png")));
        cardbase6->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(810, 70, 51, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../assets/1and.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(51, 71));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 60, 51, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../assets/placeholder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(51, 71));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 130, 51, 71));
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(51, 71));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 200, 51, 71));
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(51, 71));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 270, 51, 71));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(51, 71));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 340, 51, 71));
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(51, 71));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(380, 90, 51, 71));
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(51, 71));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(380, 160, 51, 71));
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(51, 71));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(380, 230, 51, 71));
        pushButton_9->setIcon(icon1);
        pushButton_9->setIconSize(QSize(51, 71));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(380, 300, 51, 71));
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(51, 71));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(430, 120, 51, 71));
        pushButton_11->setIcon(icon1);
        pushButton_11->setIconSize(QSize(51, 71));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(430, 190, 51, 71));
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(51, 71));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(430, 260, 51, 71));
        pushButton_13->setIcon(icon1);
        pushButton_13->setIconSize(QSize(51, 71));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(480, 150, 51, 71));
        pushButton_14->setIcon(icon1);
        pushButton_14->setIconSize(QSize(51, 71));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(480, 220, 51, 71));
        pushButton_15->setIcon(icon1);
        pushButton_15->setIconSize(QSize(51, 71));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(530, 180, 51, 71));
        pushButton_16->setIcon(icon1);
        pushButton_16->setIconSize(QSize(51, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1001, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        background->setText(QString());
        cardbase1->setText(QString());
        cardbase2->setText(QString());
        cardbase3->setText(QString());
        cardbase4->setText(QString());
        cardbase5->setText(QString());
        cardbase6->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
