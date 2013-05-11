#ifndef STATEMENTPARSER_H
#define STATEMENTPARSER_H


#include <QObject>
#include "account.h"

class StatementParser : public QObject
{
public:
    explicit StatementParser(Account* pAccount, QObject* parent = 0);
    ~StatementParser();
    int parse(const QString& filename);

private:
    Account* m_pAccount;
};

#endif // STATEMENTPARSER_H
