#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();
    void on_btn_0_clicked();
    void on_btn_delit_clicked();
    void on_btn_plus_clicked();
    void on_btn_minus_clicked();
    void on_btn_umnojit_clicked();
    void on_btn_zapyataya_clicked();
    void on_btn_CE_clicked();
    void on_btn_backspace_clicked();
    void on_btn_neg_clicked();
    QString calculateExpression(const QString &expression);
    void on_btn_ravno_clicked();
    void on_btn_C_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
