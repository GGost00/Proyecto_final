#ifndef ARMAS_H
#define ARMAS_H

#include <QObject>

class armas : public QObject
{
    Q_OBJECT
private:
    int daño;

public:
    explicit armas(QObject *parent = nullptr);

signals:

};

#endif // ARMAS_H
