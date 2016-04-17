#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <iostream>
#include <string>


int counter=1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->gbBoard->hide();
    ui->lblProperty->hide();
    ui->groupBox2->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnStart_clicked()
{


    if (ui->rb2players->isChecked())
    {
    ui->btnStart->hide();
    ui->groupbox1->hide();
    ui->groupBox2->show();
    ui->txtPlayer1->show();
    ui->txtPlayer2->show();
    ui->txtPlayer3->hide();
    ui->txtPlayer4->hide();

     /*ui->btnStart->hide();
     ui->groupbox1->hide();
     //QPixmap pixmap("/board1.png");
     //ui->lblBoard->setPixmap(pixmap);
     ui->gbBoard->showFullScreen();
*/
    }
    else if (ui->rb3players->isChecked())
    {
        ui->btnStart->hide();
        ui->groupbox1->hide();
        ui->groupBox2->show();
        ui->txtPlayer1->show();
        ui->txtPlayer2->show();
        ui->txtPlayer3->show();
        ui->txtPlayer4->hide();
    }
    else if(ui->rb4players->isChecked())
    {
        ui->btnStart->hide();
        ui->groupbox1->hide();
        ui->groupBox2->show();
        ui->txtPlayer1->show();
        ui->txtPlayer2->show();
        ui->txtPlayer3->show();
        ui->txtPlayer4->show();

    }

}

void MainWindow::on_btnRoll_clicked()
{
       //int die1 = 1;
    int die1 = (rand() % 6 + 1);
    int die2 = (rand() % 6 + 1);

    if (die1 == 1)
    {
        QImage die;


        die.load(":/UIPics/1.png");
        ui->lblDie1->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));

        if (die.isNull())
        {
            std::cout << "No image" << std::endl;
        }
        else
        {
           std::cout << "Image" << std::endl;

        }
    }
   else if (die1 == 2)
    {
        QImage die;


        die.load(":/UIPics/2.png");
        ui->lblDie1->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
   else if (die1 == 3)
    {
        QImage die;


        die.load(":/UIPics/3.png");
        ui->lblDie1->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
    else if (die1 == 4)
    {
        QImage die;


        die.load(":/UIPics/4.png");
        ui->lblDie1->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
   else if (die1 == 5)
    {
        QImage die;


        die.load(":/UIPics/5.png");
        ui->lblDie1->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
    else if (die1 == 6)
    {

        QImage die;


        die.load(":/UIPics/6.png");
        ui->lblDie1->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }





    if (die2 == 1)
    {
        QImage die;


        die.load(":/UIPics/1.png");
        ui->lblDie2->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));

        if (die.isNull())
        {
            std::cout << "No image" << std::endl;
        }
        else
        {
           std::cout << "Image" << std::endl;

        }
    }
   else if (die2 == 2)
    {
        QImage die;


        die.load(":/UIPics/2.png");
        ui->lblDie2->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
   else if (die2 == 3)
    {
        QImage die;


        die.load(":/UIPics/3.png");
        ui->lblDie2->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
    else if (die2 == 4)
    {
        QImage die;


        die.load(":/UIPics/4.png");
        ui->lblDie2->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
   else if (die2 == 5)
    {
        QImage die;


        die.load(":/UIPics/5.png");
        ui->lblDie2->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));

    }
    else if (die2 == 6)
    {

        QImage die;


        die.load(":/UIPics/6.png");
        ui->lblDie2->setPixmap(QPixmap::fromImage(die).scaled(61,61,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}

void MainWindow::on_btnProperties_clicked()
{

    if (counter == 1)
    {
    QImage image;
    image.load(":/UIPics/adminbuilding.png");
    ui->lblProperty->setPixmap(QPixmap::fromImage(image).scaled(215,215,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->lblProperty->show();
    counter++;
    }
    else if (counter == 2)
    {
        ui->lblProperty->clear();
        counter = 1;
    }


}

void MainWindow::on_btnGame_clicked()
{
    QString s = ui->txtPlayer1->toPlainText();
    std::cout << s.toStdString() << std::endl;
}
