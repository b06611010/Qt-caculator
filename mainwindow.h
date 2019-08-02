#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string.h>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_zero_clicked();

    void on_pb_one_clicked();

    void on_pb_clear_clicked();

    void on_pb_two_clicked();

    void on_pb_three_clicked();

    void on_pb_four_clicked();

    void on_pb_five_clicked();

    void on_pb_six_clicked();

    void on_pb_seven_clicked();

    void on_pb_eight_clicked();

    void on_pb_nine_clicked();

    void on_screen_overflow();

    void on_pb_plus_clicked();

    void on_pb_equal_clicked();

    void on_pb_minus_clicked();

    void on_pb_multi_clicked();



    void on_pb_divide_clicked();

    void on_pb_dot_clicked();

private:
    Ui::MainWindow *ui;
    double firstNum;
    double secondNum;
    double totalNum;
    bool firstState;
    bool dotState;
    bool plusState;
    bool minusState;
    bool multiState;
    bool divideState;
    bool equalState;
    double decimaldigitCount;
    double dotNum;
    bool zeroState;
    double zeroCount;
    int i ;
    bool nonzero;

    QString dotscreen;
};

#endif // MAINWINDOW_H
