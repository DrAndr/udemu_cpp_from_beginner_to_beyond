#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H

#include <iostream>

class Money
{
    int dollars;
    int cents;

public:
    Money(int dollars, int cents);
    Money(int total);
    int get_dollars() const { return dollars; }
    int get_cents() const { return cents; }

    friend std::ostream &operator<<(std::ostream &os, const Money &rhs);
};

#endif //_MONEY_MONEY_H