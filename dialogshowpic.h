#ifndef DIALOGSHOWPIC_H
#define DIALOGSHOWPIC_H

#include <QDialog>
#include "qcustomplot.h"
//#include "mainwindow.h"

namespace Ui {
class DialogShowPic;
}

class DialogShowPic : public QDialog
{
    Q_OBJECT

public:
    explicit DialogShowPic(QWidget *parent = 0);
    ~DialogShowPic();

    void setupShowGraph(QCustomPlot *customPlot);
    void replotGraph();

private slots:
    void on_pushButtonPlus_clicked();

    void on_pushButtonMinus_clicked();

private:
    Ui::DialogShowPic *ui;
};

#endif // DIALOGSHOWPIC_H
