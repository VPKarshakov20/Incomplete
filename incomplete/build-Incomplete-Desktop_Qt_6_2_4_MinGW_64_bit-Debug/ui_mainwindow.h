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
    QLabel *label;
    QLabel *cardbase1;
    QLabel *cardbase2;
    QLabel *cardbase3;
    QLabel *cardbase4;
    QLabel *cardbase5;
    QLabel *cardbase6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(862, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(970, 70, 161, 191));
        label->setPixmap(QPixmap(QString::fromUtf8("../../card.png")));
        label->setScaledContents(true);
        cardbase1 = new QLabel(centralwidget);
        cardbase1->setObjectName(QString::fromUtf8("cardbase1"));
        cardbase1->setEnabled(true);
        cardbase1->setGeometry(QRect(240, 50, 41, 51));
        cardbase1->setPixmap(QPixmap(QString::fromUtf8("01 card.png")));
        cardbase1->setScaledContents(true);
        cardbase2 = new QLabel(centralwidget);
        cardbase2->setObjectName(QString::fromUtf8("cardbase2"));
        cardbase2->setGeometry(QRect(240, 100, 41, 51));
        cardbase2->setPixmap(QPixmap(QString::fromUtf8("../build-Incomplete-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/01 card.png")));
        cardbase2->setScaledContents(true);
        cardbase3 = new QLabel(centralwidget);
        cardbase3->setObjectName(QString::fromUtf8("cardbase3"));
        cardbase3->setGeometry(QRect(240, 150, 41, 51));
        cardbase3->setPixmap(QPixmap(QString::fromUtf8("../build-Incomplete-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/01 card.png")));
        cardbase3->setScaledContents(true);
        cardbase4 = new QLabel(centralwidget);
        cardbase4->setObjectName(QString::fromUtf8("cardbase4"));
        cardbase4->setGeometry(QRect(240, 200, 41, 51));
        cardbase4->setPixmap(QPixmap(QString::fromUtf8("../build-Incomplete-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/01 card.png")));
        cardbase4->setScaledContents(true);
        cardbase5 = new QLabel(centralwidget);
        cardbase5->setObjectName(QString::fromUtf8("cardbase5"));
        cardbase5->setGeometry(QRect(240, 250, 40, 51));
        cardbase5->setPixmap(QPixmap(QString::fromUtf8("01 card.png")));
        cardbase5->setScaledContents(true);
        cardbase6 = new QLabel(centralwidget);
        cardbase6->setObjectName(QString::fromUtf8("cardbase6"));
        cardbase6->setGeometry(QRect(240, 300, 40, 51));
        cardbase6->setPixmap(QPixmap(QString::fromUtf8("../build-Incomplete-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/01 card.png")));
        cardbase6->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 50, 31, 51));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Incomplete-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/Empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 60));
        pushButton->setAutoRepeat(false);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 50, 161, 191));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background: transparent;l"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(161, 191));
        pushButton_2->setFlat(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(740, 490, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 861, 581));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../game field.png")));
        label_3->setScaledContents(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 120, 31, 51));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0;"));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(40, 60));
        pushButton_3->setAutoRepeat(false);
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 170, 31, 51));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0;"));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(40, 60));
        pushButton_4->setAutoRepeat(false);
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 230, 31, 51));
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0;"));
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(40, 60));
        pushButton_5->setAutoRepeat(false);
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 290, 31, 51));
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0;"));
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(40, 60));
        pushButton_6->setAutoRepeat(false);
        pushButton_6->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        label_3->raise();
        label->raise();
        cardbase1->raise();
        cardbase2->raise();
        cardbase3->raise();
        cardbase4->raise();
        cardbase5->raise();
        cardbase6->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 862, 21));
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
        label->setText(QString());
        cardbase1->setText(QString());
        cardbase2->setText(QString());
        cardbase3->setText(QString());
        cardbase4->setText(QString());
        cardbase5->setText(QString());
        cardbase6->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
