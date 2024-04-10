#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_checkbtn_clicked();

    void on_restbtn_clicked();

private:
    Ui::MainWindow *ui;
    int genNumber , guessNumber;
    QString mystring;
};
#endif // MAINWINDOW_H
