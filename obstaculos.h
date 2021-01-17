#ifndef OBSTACULOS_H
#define OBSTACULOS_H

#include <QObject>
#include "mapa.h"

class obstaculos : public QObject
{
    Q_OBJECT
private:
    int ancho,alto,tipo,vida,dano,posx,posy,velocidad;
public:
    explicit obstaculos(QObject *parent = nullptr);
    void destruir_objrto();
    void Seleccioar_objeto(int tipo);
    void Movimiento(int Px,int Py,int Vel,int tipo);

signals:

};

#endif // OBSTACULOS_H
