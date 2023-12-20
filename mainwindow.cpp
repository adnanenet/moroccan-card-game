// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // title of the game
    // title of the game qrc:///icons/gc.ico
    setWindowTitle("Sota");
    setWindowIcon(QIcon(":/gfx/icon.ico"));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::warning(
        this,
        tr("sota"),
        tr("you still have double carts") );
}

