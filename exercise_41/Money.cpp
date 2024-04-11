#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars{total / 100}, cents{total % 100} {}

bool Money::operator==(const Money &rhs) const
{
    return ((this->dollars == rhs.dollars) && (this->cents == rhs.cents));
};

bool Money::operator!=(const Money &rhs) const
{
    return ((this->dollars != rhs.dollars) || (this->cents != rhs.cents));
};
