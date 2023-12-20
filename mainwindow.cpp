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
    QString styleSheet = "background-color: #004d00;";

    this->setStyleSheet(styleSheet);

}

MainWindow::~MainWindow()
{
    delete ui;
}
