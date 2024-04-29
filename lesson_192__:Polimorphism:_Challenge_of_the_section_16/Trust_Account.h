#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Account.h"
#include "Savings_Account.h"

/**
 * Trust Accout Class
 */
class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &source);

private:
    int withdraw_counter{0};
    double limit_rate{20.0};

protected:
    double int_rate;

public:
    Trust_Account(std::string name = default_name, double balance = default_balance, double int_rate = default_int_rate);
    virtual ~Trust_Account() = default;
    virtual bool deposit(double ammount) override;
    virtual bool withdraw(double ammount) override;
    virtual double get_balance() const override;
    void set_limit_rate(double limit_rate);
};

#endif // _TRUST_ACCOUNT_H_