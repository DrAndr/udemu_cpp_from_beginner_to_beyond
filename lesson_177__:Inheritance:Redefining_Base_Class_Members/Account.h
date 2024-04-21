#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &source);

protected:
    double balance;
    std::string name;

public:
    Account(/* args */);
    Account(double balance, std::string name);
    ~Account();
    void deposit(double ammount);
    void withdraw(double ammount);
};

#endif // _ACCOUNT_H_