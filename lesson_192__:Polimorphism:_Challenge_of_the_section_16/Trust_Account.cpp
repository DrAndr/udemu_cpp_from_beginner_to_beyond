#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance), int_rate{int_rate} {};

bool Trust_Account::deposit(double ammount)
{
    if (ammount <= 0)
        return false;

    ammount = ammount + (ammount * int_rate / 100) + (ammount > 5000 ? 50.0 : 0.0);
    return Account::deposit(ammount);
}
bool Trust_Account::withdraw(double ammount)
{
    if (ammount < (balance / 100) * 20 && withdraw_counter < 3)
    {
        if (Account::withdraw(ammount))
        {
            ++withdraw_counter;
            return true;
        }
    }
    return false;
}
double Trust_Account::get_balance() const { return Account::get_balance(); }
void Trust_Account::set_limit_rate(double limit_rate) { this->limit_rate = limit_rate; }

std::ostream &operator<<(std::ostream &os, const Trust_Account &source)
{
    os << "[Trust_accoutn: " << source.name << " : " << source.balance << ", int rate: " << source.int_rate << "%] ";
    return os;
}
