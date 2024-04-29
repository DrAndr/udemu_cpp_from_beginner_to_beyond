#include <iostream>
#include "Account.h"
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee_rate)
    : Account(name, balance), fee_rate{fee_rate} {};

bool Checking_Account::withdraw(double ammount) { return Account::withdraw(ammount + fee_rate); }
bool Checking_Account::deposit(double ammount) { return Account::deposit(ammount); }
double Checking_Account::get_balance() const { return Account::get_balance(); }
void Checking_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Checking_accoutn: " << name << " : " << balance << ", int rate: " << fee_rate << "%]; ";
};

// std::ostream &operator<<(std::ostream &os, const Checking_Account &source)
// {
//     os << "[Checking_accoutn: " << source.name << " : " << source.balance << ", int rate: " << source.fee_rate << "%] ";
//     return os;
// }
