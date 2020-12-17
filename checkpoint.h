#ifndef CHECKPOINT_H
#define CHECKPOINT_H

#include <QObject>

class checkpoint : public QObject
{
    Q_OBJECT
private:
    int posx,posy,ancho,largo;
public:
    explicit checkpoint(QObject *parent = nullptr);

    void crear_checkpoint();
    void borrar_checkpoint();

signals:

};

#endif // CHECKPOINT_H
