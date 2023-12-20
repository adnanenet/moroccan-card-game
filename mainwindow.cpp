// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set your custom title here
    setWindowTitle("Sota");
}

MainWindow::~MainWindow()
{
    delete ui;
}
