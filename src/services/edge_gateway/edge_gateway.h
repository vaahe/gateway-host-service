#ifndef EDGE_GATEWAY_H
#define EDGE_GATEWAY_H

#include <QDebug>
#include <QObject>

class EdgeGateway : public QObject
{
    Q_OBJECT

public:
    explicit EdgeGateway(QObject *parent = nullptr);
    ~EdgeGateway();

public:
    void start();
};

#endif // EDGE_GATEWAY_H
