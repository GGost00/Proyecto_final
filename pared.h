#ifndef PARED_H
#define PARED_H
#include <QGraphicsItem>
#include <QPainter>

class pared: public QGraphicsItem
{

    int w,h;
    int posx, posy;

public:
    pared(int w_, int h_, int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    int getPosx() const;
    int getPosy() const;
    int getW() const;
    int getH() const;
};

#endif // PARED_H
