#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameinitializer.h"
#define SIZE 6


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel* baseCards[] = {
        ui->cardbase1, ui->cardbase2, ui->cardbase3, ui->cardbase4, ui->cardbase5, ui->cardbase6
    };


    GameInitializer::GenerateCards(SIZE, baseCards);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::selectCard);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_14, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_15, &QPushButton::clicked, this, &MainWindow::setCard);
    connect(ui->pushButton_16, &QPushButton::clicked, this, &MainWindow::setCard);


}

void MainWindow::selectCard()
{
    QPushButton* t = qobject_cast<QPushButton*>(sender());
    playCard = t->icon().pixmap(t->icon().actualSize(QSize(40, 60)));

}

void MainWindow::setCard()
{
    QPushButton* t = qobject_cast<QPushButton*>(sender());
    t->setIcon(QIcon(playCard));
}

MainWindow::~MainWindow()
{
    delete ui;
}

