#include <QPalette>
#include <QDateTime>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    time_t t = QDateTime::currentDateTime().toTime_t();
    qsrand(t);

    if (qrand() % 2 == 0)
    {
        this->window()->setPalette(QPalette( Qt::red ));
    }
    else
    {
        this->window()->setPalette(QPalette( Qt::blue ));
    }
}

MainWindow::~MainWindow()
{

}