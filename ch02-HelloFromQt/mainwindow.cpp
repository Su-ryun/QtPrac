#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Sometimes, Qt creator won't recognize that certain objects are legitament, unless I build the project.
    QString name = ui->lineEdit->selectedText();
        ui->label->setText(QString("Nice to meet you %1!").arg(name));
}
