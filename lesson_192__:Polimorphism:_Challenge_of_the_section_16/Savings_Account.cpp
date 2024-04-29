#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account(name, balance), int_rate{int_rate} {};

bool Savings_Account::deposit(double ammount)
{
    if (ammount <= 0)
        return false;

    ammount = ammount + (ammount * int_rate / 100);
    return Account::deposit(ammount);
}

bool Savings_Account::withdraw(double ammount) { return Account::withdraw(ammount); }
double Savings_Account::get_balance() const { return Account::get_balance(); }
void Savings_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Saving_accoutn: " << name << " : " << balance << ", int rate: " << int_rate << "%]; ";
};
// std::ostream &operator<<(std::ostream &os, const Savings_Account &source)
// {
//     os << "[Saving_accoutn: " << source.name << " : " << source.balance << ", int rate: " << source.int_rate << "%] ";
//     return os;
// }
