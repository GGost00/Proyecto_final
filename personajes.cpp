#include "personajes.h"

personajes::personajes(int ataque_, int tamanox_, int tamanoy_, int posx_, int posy_, int vida_)
{
    ataque=ataque_;
    tamanox=tamanox_;
    tamanoy=tamanoy_;
    posx=posx_;
    posy=posy_;
    vida=vida_;
    fila=0;
    columna=0;

    setPos(posx,posy);
    pixmap = new QPixmap(":/recursos/images/sprite.png");
}
void personajes::up()
{
   fila=512;
   columna+=64;
   if(columna>=576){columna=64;}

    posy -= velocidad;
    setPos(posx,posy);
}

void personajes::down()
{
    fila=640;
    columna+=64;
    if(columna>=576){columna=64;}
    posy += velocidad;
    setPos(posx,posy);
}

void personajes::left()
{
    fila=576;
    //pintar el sprite
    columna+=64;
    if(columna>=576){columna=0;}
    posx -= velocidad;
    setPos(posx,posy);
}

void personajes::right()
{
    fila=704;
    columna+=64;
    if(columna>=576){columna=0;}
    posx += velocidad;
    setPos(posx,posy);
}
QRectF personajes::boundingRect() const
{
    return QRectF(-64/2,-64/2,64,64);
}

void personajes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-64/2,-64/2,*pixmap,columna,fila,64,64);
}
