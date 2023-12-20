// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>


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
    // Create a QLabel for the centered image
    QLabel *centeredImage = new QLabel(this);
    centeredImage->setPixmap(QPixmap(":/gfx/home.png").scaled(600, 600, Qt::KeepAspectRatio));  // Replace with your image path
    centeredImage->setAlignment(Qt::AlignCenter);

    // Create a QVBoxLayout to center the image with top spacing
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addSpacing(20);  // Adjust the spacing as needed
    layout->addWidget(centeredImage);
    layout->setAlignment(Qt::AlignTop | Qt::AlignHCenter);

    // Set the central widget of the main window to a QWidget with the QVBoxLayout
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    // Create "Play Now" button
    QPushButton *playNowButton = new QPushButton("Play Now", this);
    playNowButton->setStyleSheet("QPushButton {"
                                 "background-color: yellow;"
                                 "border: 2px solid red;"
                                 "border-radius: 10px;"
                                 "padding: 5px;"
                                 "}"
                                 "QPushButton:hover {"
                                 "background-color: lightyellow;"
                                 "}");
    // Add the button to the layout
    layout->addWidget(playNowButton);


}

MainWindow::~MainWindow()
{
    delete ui;
}
