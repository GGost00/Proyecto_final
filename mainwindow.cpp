#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    ifstream Leer;
    int ancho1,alto1,posix,posiy;
    scene->setSceneRect(0,0,1056,1056);
    scene->addPixmap(QPixmap(":/recursos/images/sin nombre.png"));
    view->setScene(scene);
    view->resize(400,400);
    this->resize(400,400);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    Leer.open("/Users/Gabriel Restrepo/Documents/Proyecto_final/coords.txt");
    char linea[20];
    Leer.getline(linea, sizeof(linea));
    while (!Leer.eof()) {
        for(int i=0; i<4;i++){
            char *puntero;
            if(i==0){
                puntero = strtok(linea, ",");
                ancho1 = atoi(puntero);
            }
            if(i==1){
                puntero = strtok(NULL, ",");
                alto1 = atoi(puntero);
            }
            if(i==2){
                puntero = strtok(NULL, ",");
                posix = atoi(puntero);
            }
            if(i==3){
                puntero = strtok(NULL, ",");
                posiy = atoi(puntero);
            }
        }
        paredes.push_back(new pared (ancho1,alto1,posix,posiy));
        scene->addItem(paredes.back());
        Leer.getline(linea, sizeof(linea));
    }
    Leer.close();




    personaje= new personajes(10,62,62,64/2,64/2,20);
    view->centerOn(personaje->getPosx(),personaje->getPosy());
    scene->addItem(personaje);
    //personaje->setPos(680,340);
}
void MainWindow::keyPressEvent(QKeyEvent *evento)
{
 if(evento->key() == Qt::Key_A){
     personaje->left();
     view->centerOn(personaje->getPosx(),personaje->getPosy());
 }
 if(evento->key() == Qt::Key_D){
     personaje->right();
     view->centerOn(personaje->getPosx(),personaje->getPosy());
 }
 if(evento->key() == Qt::Key_W){
     personaje->up();
     view->centerOn(personaje->getPosx(),personaje->getPosy());
 }
 if(evento->key() == Qt::Key_S){
     personaje->down();
     view->centerOn(personaje->getPosx(),personaje->getPosy());
 }
}
MainWindow::~MainWindow()
{
    delete ui;
}

