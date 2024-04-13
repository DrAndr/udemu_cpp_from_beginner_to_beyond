#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars{total / 100}, cents{total % 100} {}


Money operator+(const Money &lhs, const Money &rhs)
{
    int *tempTotal = new int(0);
    *tempTotal += (lhs.dollars + rhs.dollars) * 100;
    *tempTotal += lhs.cents + rhs.cents;

    Money newObj{*tempTotal};
    delete tempTotal;
    return newObj;
}

