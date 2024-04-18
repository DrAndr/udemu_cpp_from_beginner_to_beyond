#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account: public Account
{
private:
    /* data */
public:
    Savings_Account(/* args */);
    ~Savings_Account();
    void deposit(double ammount);
    void withdraw(double ammount);
};

#endif // _SAVINGS_ACCOUNT_H_