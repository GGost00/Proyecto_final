#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRect Desktop =QApplication::desktop()->screenGeometry();
    x=Desktop.x();
    y=Desktop.y();
    ancho=200;
    alto=300;

    scene = new QGraphicsScene(x,y,ancho,alto);
    scene->setBackgroundBrush(QPixmap(":/images/map.png"));


    ui->graphicsView->setScene(scene);
    setFixedSize(420,500);
    scene->setSceneRect(0,0,300,100);




    personaje= new personajes(10,62,62,64/2,64/2,20);
    scene->addItem(personaje);
    //personaje->setPos(680,340);
}
void MainWindow::keyPressEvent(QKeyEvent *evento)
{
 if(evento->key() == Qt::Key_A){
     personaje->left();
 }
 if(evento->key() == Qt::Key_D){
     personaje->right();
 }
 if(evento->key() == Qt::Key_W){
     personaje->up();
 }
 if(evento->key() == Qt::Key_S){
     personaje->down();
 }
}
MainWindow::~MainWindow()
{
    delete ui;
}

