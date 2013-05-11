
#include <QDebug>
#include "statementparser.h"


StatementParser::StatementParser(Account* pAccount, QObject* parent) :
    QObject(parent)
  ,m_pAccount(pAccount)
{

}

StatementParser::~StatementParser()
{

}

int StatementParser::parse(const QString& filename)
{
    qDebug() << "Parsing statement file : " << filename << " ...\n";

    return 0;
}
