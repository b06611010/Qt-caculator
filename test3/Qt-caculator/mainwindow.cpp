#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    firstNum = 0;
    firstState = true;
    secondNum = 0;
    totalNum = 0;
    dotState = false;
    plusState = false;
    minusState = false;
    multiState = false;
    divideState = false;
    equalState = false;
    zeroCount = 0;
    nonzero = false;



    decimaldigitCount = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pb_clear_clicked()
{
    ui->screen->display(0);
    firstNum=0;
    firstState = true;
    secondNum = 0;
    dotState = false;
    plusState = false;
    minusState = false;
    multiState = false;
    divideState = false;
    equalState = false;
    ui->pb_dot->setEnabled(true);
    ui->pb_plus->setEnabled(true);
    ui->pb_minus->setEnabled(true);
    ui->pb_multi->setEnabled(true);
    ui->pb_divide->setEnabled(true);
    zeroCount = 0;
}

void MainWindow::on_pb_zero_clicked()
{
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 ;
            ui->screen->display(firstNum);
        }
        else
        {
            zeroCount = zeroCount + 1 ;
            decimaldigitCount = decimaldigitCount*10;
            if(zeroState==false)
            {
                dotscreen = QString::number(firstNum);
                if(nonzero==true)
                {
                    dotscreen += ".";
                    nonzero = false;
                }
                for( i=0 ;i<zeroCount;i++)
                {
                    dotscreen += "0";
                }
                ui->screen->display(dotscreen);
            }
            if(zeroState==true)
            {
                dotscreen = QString::number(firstNum);
                dotscreen += ".0";
                ui->screen->display(dotscreen);
                zeroState = false;
            }
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 ;
            ui->screen->display(secondNum);
        }
        else
        {
            zeroCount = zeroCount + 1 ;
            decimaldigitCount = decimaldigitCount*10;
            if(zeroState==false)
            {
                dotscreen = QString::number(secondNum);
                if(nonzero==true)
                {
                    dotscreen += ".";
                    nonzero = false;
                }
                for( i=0 ;i<zeroCount;i++)
                {
                    dotscreen += "0";
                }
                ui->screen->display(dotscreen);
            }
            if(zeroState==true)
            {
                dotscreen = QString::number(secondNum);
                dotscreen += ".0";
                ui->screen->display(dotscreen);
                zeroState = false;
            }
        }
    }
}
void MainWindow::on_pb_one_clicked()
{

    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 1;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 1/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 1;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +1/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_two_clicked()
{

    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 2;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 2/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 2;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +2/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_three_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 3;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 3/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 3;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +3/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_four_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 4;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 4/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 4;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +4/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_five_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 5;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 5/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 5;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +5/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_six_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 6;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 6/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 6;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +6/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_seven_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 7;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 7/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 7;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +7/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_eight_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 8;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 8/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 8;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +8/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_pb_nine_clicked()
{
    zeroCount = 0;
    zeroState = false;
    if(equalState==true)
    {
        firstState = true;
        firstNum = 0;
        secondNum = 0;
        equalState = false;
    }
    if(firstState==true)
    {
        if(dotState==false)
        {
            firstNum = firstNum * 10 + 9;
            ui->screen->display(firstNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            firstNum = firstNum + 9/decimaldigitCount;
            ui->screen->display(firstNum);
        }
    }
    else
    {
        if(dotState==false)
        {
            secondNum = secondNum * 10 + 9;
            ui->screen->display(secondNum);
        }
        else
        {
            decimaldigitCount = decimaldigitCount*10;
            secondNum = secondNum +9/decimaldigitCount;
            ui->screen->display(secondNum);
        }
    }
}

void MainWindow::on_screen_overflow()
{

}

void MainWindow::on_pb_plus_clicked()
{
    zeroCount = 0;
    firstState = false;
    if (firstState==false)
    {
        ui->pb_plus->setEnabled(false);
        ui->pb_minus->setEnabled(false);
        ui->pb_multi->setEnabled(false);
        ui->pb_divide->setEnabled(false);
    }
    plusState = true;
    dotState = false;
    equalState = false;

    ui->pb_dot->setEnabled(true);
}

void MainWindow::on_pb_minus_clicked()
{
    zeroCount = 0;
    firstState = false;
    if (firstState==false)
    {
        ui->pb_plus->setEnabled(false);
        ui->pb_minus->setEnabled(false);
        ui->pb_multi->setEnabled(false);
        ui->pb_divide->setEnabled(false);
    }
    minusState = true;
    dotState = false;
    equalState = false;

    ui->pb_dot->setEnabled(true);
}


void MainWindow::on_pb_multi_clicked()
{
    zeroCount = 0;
    firstState = false;
    if (firstState==false)
    {
        ui->pb_plus->setEnabled(false);
        ui->pb_minus->setEnabled(false);
        ui->pb_multi->setEnabled(false);
        ui->pb_divide->setEnabled(false);
    }
    multiState = true;
    dotState = false;
    equalState = false;

    ui->pb_dot->setEnabled(true);
}



void MainWindow::on_pb_equal_clicked()
{
    zeroCount = 0;
    equalState = true;
    if(plusState==true)
    {
        totalNum = firstNum+secondNum;
        ui->screen->display(totalNum);
    }
    if(minusState==true)
    {
        totalNum = firstNum-secondNum;
        ui->screen->display(totalNum);
    }
    if(multiState==true)
    {
        totalNum = firstNum*secondNum;
        ui->screen->display(totalNum);
    }
    if(divideState==true)
    {
        totalNum = firstNum/secondNum;
        ui->screen->display(totalNum);
    }
    if((plusState==false)&&(minusState==false)&&(multiState==false)&&(divideState==false))
    {
        totalNum = firstNum;
    }
    if(firstState==false)
    {
        firstNum = 0;
        secondNum = 0;
    }
    firstNum = totalNum;
    ui->pb_dot->setEnabled(true);
    ui->pb_plus->setEnabled(true);
    ui->pb_minus->setEnabled(true);
    ui->pb_multi->setEnabled(true);
    ui->pb_divide->setEnabled(true);
    dotState = false;
    plusState = false;
    minusState = false;
    multiState = false;
    divideState = false;

}



void MainWindow::on_pb_divide_clicked()
{
    zeroCount = 0;
    firstState = false;
    if (firstState==false)
    {
        ui->pb_plus->setEnabled(false);
        ui->pb_minus->setEnabled(false);
        ui->pb_multi->setEnabled(false);
        ui->pb_divide->setEnabled(false);
    }
    divideState = true;
    dotState = false;
    equalState = false;

    ui->pb_dot->setEnabled(true);
}

void MainWindow::on_pb_dot_clicked()
{
    decimaldigitCount = 1;
    dotState = true;
    if(firstState==true)
    {
        dotscreen = QString::number(firstNum);
        dotscreen += ". ";
        ui->screen->display(dotscreen);

    }
    if(firstState==false)
    {

        dotscreen = QString::number(secondNum);
        dotscreen += ". ";
        ui->screen->display(dotscreen);
    }
    ui->pb_dot->setEnabled(false);
    zeroState = true;
    nonzero = true;
}
