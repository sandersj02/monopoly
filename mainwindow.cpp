#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "player.cpp"
#include <QtGui>
#include <iostream>
#include <string>
#include <ctime>


int turn = 1;
int counter = 0;
int playerCount = 2;
player* one = new player("", "Green", 1);
player* two = new player("", "Blue", 2);
player* three = new player("", "purple", 3);
player* four = new player("", "Red", 4);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand (time(NULL));
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
    ui->lblColor3->hide();
    ui->lblColor4->hide();

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
        ui->lblColor4->hide();
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
        ui->lblColor4->show();

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
    std::cout << turn << std::endl;
    if(turn == 1)
    {

        int move = die1+die2+ one->getLocation();
        if(move > 35) //Because there are only 36 spaces on the board
        {
            move = move - 35;

        }
        one->setLocation(move);
        one->hasRolled(true);
        if (die1==die2)
        {
            one->hasRolled(false);
        }
        std::cout << one->getLocation() << std::endl;
    }
    else if (turn == 2)
    {
        int move = die1+die2+ two->getLocation();
        if(move>35)
        {
            move = 35 - move;
        }
        two->setLocation(move);
        two->hasRolled(true);
        if (die1==die2)
        {
            two->hasRolled(false);
        }
    }
    else if (turn == 3)
    {
        int move = die1+die2+three->getLocation();
        if (move > 35)
        {
            move = 35 - move;
        }
        three->setLocation(move);
        three->hasRolled(true);
        if (die1==die2)
        {
            three->hasRolled(false);
        }
    }
    else if (turn == 4)
    {
        int move = die1+die2+four->getLocation();
        if(move > 35)
        {
            move = 35 - move;
        }
        four->setLocation(move);
        four->hasRolled(true);
        if (die1==die2)
        {
            four->hasRolled(false);
        }
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
    QString s2 = ui->txtPlayer2->toPlainText();
    player* one = new player(s.toStdString(),ui->lblColor1->toPlainText().toStdString(),1);
    player* two = new player(s2.toStdString(), ui->lblColor2->toPlainText().toStdString(), 2);
    playerCount = 2;
    if(ui->rb3players->isChecked())
    {
        playerCount = 3;
        QString s3 = ui->txtPlayer3->toPlainText();
        player* three = new player(s3.toStdString(), "purple", 3);
        std::cout << three->getName() << std::endl;

    }
    else if (ui->rb4players->isChecked())
    {
        playerCount = 4;
        QString s3 = ui->txtPlayer3->toPlainText();
        player* three = new player(s3.toStdString(), ui->lblColor3->toPlainText().toStdString(), 3);
        QString s4 = ui->txtPlayer4->toPlainText();
        player* four = new player(s4.toStdString(), ui->lblColor4->toPlainText().toStdString(), 4);
        std::cout << three->getName() << std::endl;
    }

    std::cout << one->getName() << std::endl;
    std::cout << one->getId() << std::endl;
    std::cout << one->getPiece() << std::endl;
    std::cout << one->getMoney() << std::endl;
    std::cout << two->getName()<< std::endl;
    std::cout << two->getId() << std::endl;
ui->gbBoard->showFullScreen();
ui->gbBoard->raise();
ui->groupBox2->hide();


}



void MainWindow::on_btnEnd_clicked()
{
    if (turn == playerCount)
    {
        turn = 0;
    }
    turn++;


}


void MainWindow::on_gbBoard_clicked()
{

}
