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
std::string space;
player* one = new player("", "green", 1);
player* two = new player("", "blue", 2);
player* three = new player("", "purple", 3);
player* four = new player("", "red", 4);
QLabel* spaces[40];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand (time(NULL));
    ui->setupUi(this);


    ui->gbBoard->hide();
    ui->lblProperty->hide();
    ui->groupBox2->hide();

    spaces[0] = ui->lblSpace0;
    spaces[1] = ui->lblSpace1;
    spaces[2] = ui->lblSpace2;
    spaces[3] = ui->lblSpace3;
    spaces[4] = ui->lblSpace4;
    spaces[5] = ui->lblSpace5;
    spaces[6] = ui->lblSpace6;
    spaces[7] = ui->lblSpace7;
    spaces[8] = ui->lblSpace8;
    spaces[9] = ui->lblSpace9;
    spaces[10] = ui->lblSpace10;
    spaces[11] = ui->lblSpace11;
    spaces[12] = ui->lblSpace12;
    spaces[13] = ui->lblSpace13;
    spaces[14] = ui->lblSpace14;
    spaces[15] = ui->lblSpace15;
    spaces[16] = ui->lblSpace16;
    spaces[17] = ui->lblSpace17;
    spaces[18] = ui->lblSpace18;
    spaces[19] = ui->lblSpace19;
    spaces[20] = ui->lblSpace20;
    spaces[21] = ui->lblSpace21;
    spaces[22] = ui->lblSpace22;
    spaces[23] = ui->lblSpace23;
    spaces[24] = ui->lblSpace24;
    spaces[25] = ui->lblSpace25;
    spaces[26] = ui->lblSpace26;
    spaces[27] = ui->lblSpace27;
    spaces[28] = ui->lblSpace28;
    spaces[29] = ui->lblSpace29;
    spaces[30] = ui->lblSpace30;
    spaces[31] = ui->lblSpace31;
    spaces[32] = ui->lblSpace32;
    spaces[33] = ui->lblSpace33;
    spaces[34] = ui->lblSpace34;
    spaces[35] = ui->lblSpace35;
    spaces[36] = ui->lblSpace36;
    spaces[37] = ui->lblSpace37;
    spaces[38] = ui->lblSpace38;
    spaces[39] = ui->lblSpace39;





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
    std::cout << "this is turn" << std::endl;

    if(turn == 1)
    {   if (one->getRolled() == true)
        {

        }
    else{
        int move = die1+die2+ one->getLocation();
        spaces[one->getLocation()]->setPixmap(QPixmap());

        if(move > 39) //Because there are only 40 spaces on the board
        {
            move = move - 39;

        }
        one->setLocation(move);



        QImage piece;
        QString pImage;
        pImage = ":/UIPics/" + one->getPiece()+ ".png";
        piece.load(pImage);


        spaces[one->getLocation()]->setPixmap(QPixmap::fromImage(piece));
        if(one->getLocation() == 30)
        {   ui->lblSpace30->setPixmap(QPixmap());
            ui->lblSpaceJail->setPixmap(QPixmap::fromImage(piece));
            one->setInJail(true);
        }
std::cout<<one->getPiece().toStdString() << std::endl;


        one->hasRolled(true);
        if (die1==die2)
        {
            one->hasRolled(false);
        }
        std::cout << one->getLocation() << std::endl;
    }
    }
    else if (turn == 2)
    {
        if(two->getRolled() == true)
        {

        }
        else{
        int move = die1+die2+ two->getLocation();
        spaces[two->getLocation()]->setPixmap(QPixmap());
        if(move>39)
        {
            move = move-39;
        }
        two->setLocation(move);
        QImage piece;
        QString pImage;
        pImage = ":/UIPics/" + two->getPiece()+ ".png";
        piece.load(pImage);


        spaces[two->getLocation()]->setPixmap(QPixmap::fromImage(piece));
        if(two->getLocation() == 30)
        {   ui->lblSpace30->setPixmap(QPixmap());
            ui->lblSpaceJail->setPixmap(QPixmap::fromImage(piece));
            two->setInJail(true);
        }
        two->hasRolled(true);
        if (die1==die2)
        {
            two->hasRolled(false);
        }
        }
    }
    else if (turn == 3)
    {
        if (three->getRolled() == true)
        {

        }
        else{
        int move = die1+die2+three->getLocation();
        spaces[three->getLocation()]->setPixmap(QPixmap());
        if (move > 39)
        {
            move = move-39;
        }
        three->setLocation(move);
        QImage piece;
        QString pImage;
        pImage = ":/UIPics/" + three->getPiece()+ ".png";
        piece.load(pImage);


        spaces[three->getLocation()]->setPixmap(QPixmap::fromImage(piece));
        if(three->getLocation() == 30)
        {   ui->lblSpace30->setPixmap(QPixmap());
            ui->lblSpaceJail->setPixmap(QPixmap::fromImage(piece));
            three->setInJail(true);
        }
        three->hasRolled(true);
        if (die1==die2)
        {
            three->hasRolled(false);
        }
        }
    }
    else if (turn == 4)
    {   if (four->getRolled() == true)
        {

        }
        else{
        int move = die1+die2+four->getLocation();
        spaces[four->getLocation()]->setPixmap(QPixmap());
        if(move > 39)
        {
            move = move-39;
        }
        four->setLocation(move);
        QImage piece;
        QString pImage;
        pImage = ":/UIPics/" + four->getPiece()+ ".png";
        piece.load(pImage);


        spaces[four->getLocation()]->setPixmap(QPixmap::fromImage(piece));
        if(four->getLocation() == 30)
        {   ui->lblSpace30->setPixmap(QPixmap());
            ui->lblSpaceJail->setPixmap(QPixmap::fromImage(piece));
            four->setInJail(true);
        }
        four->hasRolled(true);
        if (die1==die2)
        {
            four->hasRolled(false);
        }
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
     one = new player(s.toStdString(),ui->lblColor1->toPlainText(),1);
     two = new player(s2.toStdString(), ui->lblColor2->toPlainText(), 2);
    //ui->lblSpace0->setPixmap(QPixmap::fromImage(":/UIPics/"+(string)one->getPiece()+".png"));
    playerCount = 2;
    if(ui->rb3players->isChecked())
    {
        playerCount = 3;
        QString s3 = ui->txtPlayer3->toPlainText();
        three = new player(s3.toStdString(), "purple", 3);
        std::cout << three->getName() << std::endl;

    }
    else if (ui->rb4players->isChecked())
    {
        playerCount = 4;
        QString s3 = ui->txtPlayer3->toPlainText();
        three = new player(s3.toStdString(), ui->lblColor3->toPlainText(), 3);
        QString s4 = ui->txtPlayer4->toPlainText();
        four = new player(s4.toStdString(), ui->lblColor4->toPlainText(), 4);
        std::cout << three->getName() << std::endl;
    }

    std::cout << one->getName() << std::endl;
    std::cout << one->getId() << std::endl;
    std::cout << one->getPiece().toStdString() << std::endl;
    std::cout << one->getMoney() << std::endl;
    std::cout << two->getName()<< std::endl;
    std::cout << two->getId() << std::endl;
   // QLabel* spaces[40] = {ui->lblSpace0, ui->lblSpace1, ui->lblSpace2, ui->lblSpace3, ui->lblSpace4, ui->lblSpace5, ui->lblSpace6, ui->lblSpace7, ui->lblSpace8, ui->lblSpace9, ui->lblSpace10, ui->lblSpace11, ui->lblSpace12, ui->lblSpace13, ui->lblSpace14, ui->lblSpace15, ui->lblSpace16, ui->lblSpace17, ui->lblSpace18, ui->lblSpace19, ui->lblSpace20, ui->lblSpace21, ui->lblSpace22, ui->lblSpace23, ui->lblSpace24, ui->lblSpace25, ui->lblSpace26, ui->lblSpace27, ui->lblSpace28, ui->lblSpace29, ui->lblSpace30, ui->lblSpace31, ui->lblSpace32, ui->lblSpace33, ui->lblSpace34, ui->lblSpace35, ui->lblSpace36, ui->lblSpace37, ui->lblSpace38, ui->lblSpace39};
    QImage pimage;

    QString path = ":/UIPics/" + one->getPiece() + ".png";
    pimage.load(path);

    spaces[0]->setPixmap(QPixmap::fromImage(pimage));
ui->gbBoard->showFullScreen();
ui->gbBoard->raise();
ui->groupBox2->hide();


}



void MainWindow::on_btnEnd_clicked()
{
    if (turn == 1 && one->getRolled() == false)
    {

    }
   else if(turn == 2 && two->getRolled() == false)
    {

    }
    else if (turn == 3 && three->getRolled() == false)
    {

    }
    else if (turn == 4 && four->getRolled() == false)
    {

    }
    else
    {
        one->hasRolled(false);
        two->hasRolled(false);
        three->hasRolled(false);
        four->hasRolled(false);
        turn++;
    }
    if (turn == playerCount+1)
    {
        turn = 1;
    }



}


void MainWindow::on_gbBoard_clicked()
{

}
