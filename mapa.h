#ifndef MAPA_H
#define MAPA_H
#include <QPixmap>
#include <QPainter>
#include <QGraphicsItem>
#include <iostream>
using namespace std;

class mapa
{
private:
    int ancho,alto,valor;
public:
    mapa(int Ancho, int Alto, int Valor);
    void setValor(int value);
    int getValor() const;
    int getAncho() const;
    int getAlto() const;
};

#endif // MAPA_H
