#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));

    // genrating number

    genNumber = rand() % 10 + 1;
    qDebug()<<"Number genrated is : "<<QString::number(genNumber);

    ui->restbtn->setDisabled(true);
    ui->hintarea->setText("Hint : Number is in between 0 and 10");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkbtn_clicked()
{
    guessNumber = ui->inputbox->value();

    if(guessNumber == genNumber){
        // Guessed Correctly
        mystring="Congratulations, You Guessed the number : ";
        ui->hintarea->setText(mystring+QString::number(genNumber));

        ui->restbtn->setDisabled(false);
        ui->checkbtn->setDisabled(true);

    }else if(guessNumber > genNumber){

        ui->hintarea->setText("You guessed too high ");
        ui->restbtn->setDisabled(true);
    }else{

        ui->hintarea->setText("You guessed too low");
        ui->restbtn->setDisabled(true);
    }

}


void MainWindow::on_restbtn_clicked()
{
    ui->checkbtn->setDisabled(false);

    ui->restbtn->setDefault(true);
    ui->inputbox->setValue(0);

    // Genrating again

    genNumber = rand() %10 +1;
    qDebug()<<"Number genrated is : "<<QString::number(genNumber);
    ui->hintarea->setText("Hint : Number is in between 0 and 10");
}

