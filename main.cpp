#include <QCoreApplication>
#include <QDebug>

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
    checkDev();

    return a.exec();
}
