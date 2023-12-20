// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // title of the game
    setWindowTitle("Sota");
    // setWindowIcon(QIcon(":/path/to/your/icon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
