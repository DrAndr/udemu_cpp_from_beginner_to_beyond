#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account
{
private:
    /* data */
public:
    double balance;
    std::string name;
    ///////
    Account(/* args */);
    ~Account();
    void deposit(double ammount);
    void withdraw(double ammount);
};

#endif // _ACCOUNT_H_