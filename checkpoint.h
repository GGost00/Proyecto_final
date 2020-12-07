#ifndef CHECKPOINT_H
#define CHECKPOINT_H

#include <QObject>

class checkpoint : public QObject
{
    Q_OBJECT
public:
    explicit checkpoint(QObject *parent = nullptr);

signals:

};

#endif // CHECKPOINT_H
