// Money.h

#ifndef MONEY_H
#define MONEY_H

class Money
{
protected:
    int amount;
public:
    Money(const int &amount);
    bool operator ==(const Money &money) const;
    ~Money();
};

#endif
