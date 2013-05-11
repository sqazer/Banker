
#include <QDebug>
#include "account.h"


Account::Account(QObject* parent) :
    QObject(parent)
{

}

Account::~Account()
{

}

int Account::load(const QString& filename)
{
    qDebug() << "Loading account file : " << filename << " ...\n";

    return 0;
}

int Account::save()
{
    qDebug() << "Saving account file ...\n";

    return 0;
}
