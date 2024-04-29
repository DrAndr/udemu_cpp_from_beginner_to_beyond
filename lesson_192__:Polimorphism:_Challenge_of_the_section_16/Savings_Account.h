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
protected:
    static constexpr const char *default_name = "Unnamed Saving Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_int_rate = 0.0;
    double int_rate;

public:
    Savings_Account(std::string name = default_name, double balance = default_balance, double int_rate = default_int_rate);
    virtual ~Savings_Account() = default;
    virtual bool deposit(double ammount)override;
    virtual bool withdraw(double ammount)override;
    virtual double get_balance() const override;
};

#endif // _SAVINGS_ACCOUNT_H_