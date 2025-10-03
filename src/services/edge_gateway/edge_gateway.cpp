#include "edge_gateway.h"

EdgeGateway::EdgeGateway(QObject *parent) : QObject{parent}
{
    qDebug() << "Edge gateway ctor";
}

EdgeGateway::~EdgeGateway() {
    qDebug() << "Edge gateway dtor";
}

void EdgeGateway::start() {
    qDebug() << "Starting edge gateway...";
}
