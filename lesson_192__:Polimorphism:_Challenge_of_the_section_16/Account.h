#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
// #include "I_Printable.h"

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &source);

private:
    static constexpr const char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;

protected:
    double balance;
    std::string name;

public:
    Account(std::string name = default_name, double balance = default_balance);
    virtual ~Account() = default;
    virtual bool deposit(double ammount) = 0;
    virtual bool withdraw(double ammount) = 0;
    virtual double get_balance() const;
};

#endif // _ACCOUNT_H_