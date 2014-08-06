#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QProcess>
#include<QDebug>
#include<QtGui/QApplication>
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix ("/home/syed/Desktop/final app/dc.png");
    ui->label_pick->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()   // process one should be launched (bash launches)
{
    QProcess *proc = new QProcess();
    proc->setWorkingDirectory("/home/kondo/");
    proc->start("/bin/bash", QStringList() << "/home/syed/backup.sh");
    qDebug() << "Error in opening the file =" << proc->errorString();
   // MainWindow::on_checkBox_2_stateChanged(0);
  //  MainWindow::pushbutton3(TRUE);

}

void MainWindow::on_pushButton_2_clicked() //
{
    QProcess *proc1 = new QProcess();
    proc1->setWorkingDirectory("/home/kondo/");
    proc1->start("/bin/bash", QStringList() << "/home/syed/restore.sh");
    qDebug() << "Error in opening the file =" << proc1->errorString();
   // MainWindow::on_checkBox_2_stateChanged(0);

}

//void MainWindow::on_checkBox_2_stateChanged (int arg)
//{
 //if (arg == 0)
 //Qt::Checked;
     //setEnabled();
//}



  //  if (TRUE)
  //background-color: rgb(255,125,100);


//void MainWindow::pushbutton3(bool) //
//{
//
  //  if (TRUE)
 // background-color: rgb(255,125,100);

//}

/*void MainWindow::on_pushButton_3_toggled(bool checked)
{
    if (checked)
        backgroundColourButton->setStyleSheet("background")
}
*/
