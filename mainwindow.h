#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QRectF>
#include <QDesktopWidget>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QWidget>
#include "personajes.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    personajes *personaje;
    void keyPressEvent(QKeyEvent * evento);

    float x,y,ancho,alto;
};
#endif // MAINWINDOW_H
