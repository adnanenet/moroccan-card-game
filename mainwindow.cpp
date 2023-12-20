// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // title of the game
    setWindowTitle("Sota");
    // icon
    setWindowIcon(QIcon(":/gfx/icon.ico"));
    // Set the background image using a stylesheet
    QString styleSheet = "background-image: url(:/gfx/bg.png);"
                         "background-repeat: no-repeat;"
                         "background-position: center;"
                         "background-size: cover;";

    this->setStyleSheet(styleSheet);

}

MainWindow::~MainWindow()
{
    delete ui;
}
