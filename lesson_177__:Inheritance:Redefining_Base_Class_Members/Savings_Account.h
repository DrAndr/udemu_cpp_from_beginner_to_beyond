#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

/**
 * Savings Accout Class
 * The deposit method increments ammoutn to be deposited by amount * int_rate percentage!
 * So a 1000 deposit at 5% interest rate will deposit 1000 + 50 = 1050
 */
class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &source);

private:
    double int_rate;

public:
    Savings_Account(/* args */);
    Savings_Account(double balance, double int_rate, std::string name = "Account name");
    ~Savings_Account();
    void deposit(double ammount);
    // The withdraw is inherited
};

#endif // _SAVINGS_ACCOUNT_H_