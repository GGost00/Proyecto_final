#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>

class proyectil : public QObject
{
    Q_OBJECT
private:
    int movimiento,posx,posy;
public:
    explicit proyectil(QObject *parent = nullptr);
    void moverproyectil(int movimiento);

signals:

};

#endif // PROYECTIL_H
