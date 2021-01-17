#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <QPainter>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QRectF>
#include <QDesktopWidget>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QWidget>
#include "personajes.h"
#include "pared.h"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void Guardar_partida();
    QList<pared *> paredes;
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene = new QGraphicsScene(this);
    QGraphicsView * view = new QGraphicsView(this);
    personajes *personaje;
    void keyPressEvent(QKeyEvent * evento);
};
#endif // MAINWINDOW_H
