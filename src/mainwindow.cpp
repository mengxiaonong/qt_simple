#include "mainwindow.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Qt Simple Application");
    setGeometry(100, 100, 400, 300);
    
    // Create central widget
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    // Create layout
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    
    // Create and add label
    label = new QLabel("Welcome to Qt!", this);
    label->setStyleSheet("font-size: 18px; font-weight: bold;");
    layout->addWidget(label);
    
    // Create and add button
    button = new QPushButton("Click Me!", this);
    layout->addWidget(button);
    
    // Connect button click to slot
    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    
    // Add stretch to push widgets to top
    layout->addStretch();
}

MainWindow::~MainWindow()
{
}

void MainWindow::onButtonClicked()
{
    label->setText("Button was clicked!");
}