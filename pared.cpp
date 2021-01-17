
#include "pared.h"

int pared::getPosx() const
{
    return posx;
}



int pared::getPosy() const
{
    return posy;
}


int pared::getW() const
{
    return w;
}

int pared::getH() const
{
    return h;
}

pared::pared(int w_, int h_, int x, int y)
{
    w = w_;
    h = h_;
    posx = x;
    posy = y;
}

QRectF pared::boundingRect() const
{
    return QRectF(-posx,-posy,w,h);
}

void pared::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->setBrush(Qt::red);
        painter->drawRect(boundingRect());
}
