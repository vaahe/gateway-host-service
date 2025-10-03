#include <QCoreApplication>
#include <QDebug>

#include "services/edge_gateway/edge_gateway.h"

void checkDev() {
#ifdef APP_ENV_DEV
    qDebug() << "Dev env";
#else
    qDebug() << "Prod env";
#endif
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EdgeGateway edgeGateway;
    edgeGateway.start();

    checkDev();

    return a.exec();
}
