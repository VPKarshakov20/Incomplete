#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameintializer.h"
#define SIZE 6


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel* baseCards[] = {
        ui->cardbase1, ui->cardbase2, ui->cardbase3, ui->cardbase4, ui->cardbase5, ui->cardbase6
    };

    //TODO: add 2d array to put cards

    GameInitializer::GenerateCards(SIZE, baseCards);

    connect(ui->pushButton_2, &QPushButton::clicked, this, &::MainWindow::selectCard);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::setCard);

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

