#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

/**
 * Checking Accout Class
 */
class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &source);

private:
    static constexpr const char *default_name = "Unnamed Saving Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee_rate = 1.5;

protected:
    double fee_rate;

public:
    Checking_Account(std::string name = default_name, double balance = default_balance, double fee_rate = default_fee_rate);
    virtual ~Checking_Account() = default;
    virtual bool deposit(double ammount) override; // derived from the Seper Class
    virtual bool withdraw(double ammount) override;
    virtual double get_balance() const override;
};

#endif // _CHECKING_ACCOUNT_H_