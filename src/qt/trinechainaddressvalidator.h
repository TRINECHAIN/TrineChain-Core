#ifndef TRINECHAINADDRESSVALIDATOR_H
#define TRINECHAINADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class TRINECHAINAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit TRINECHAINAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // TRINECHAINADDRESSVALIDATOR_H
