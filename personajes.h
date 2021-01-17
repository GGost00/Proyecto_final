#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class personajes : public QObject ,public QGraphicsItem
{
    Q_OBJECT
protected:
    int ataque,tamanox,tamanoy,posx,posy,vida,velocidad=3,fila,columna;

public:
    QPixmap * pixmap;
    personajes(int,int,int,int,int,int);

    void up();
    void down();
    void left();
    void right();

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget=nullptr);
    int getPosx() const;

    int getPosy() const;

signals:

};

#endif // PERSONAJES_H
