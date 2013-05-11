#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QObject>

class Account : public QObject
{
public:
    explicit Account(QObject* parent = 0);
    ~Account();
    int load(const QString& filename);
    int save();

private:
    QString m_fileName;
    QString m_accountName;
};


#endif // ACCOUNT_H
