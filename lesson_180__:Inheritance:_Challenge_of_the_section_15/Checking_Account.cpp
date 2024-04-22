#include <iostream>
#include "Account.h"
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee_rate)
    : Account(name, balance), fee_rate{fee_rate} {};

Checking_Account::~Checking_Account() {}

bool Checking_Account::withdraw(double ammount) { return Account::withdraw(ammount + fee_rate); }

std::ostream &operator<<(std::ostream &os, const Checking_Account &source)
{
    os << "[Checking_accoutn: " << source.name << " : " << source.balance << ", int rate: " << source.fee_rate << "%] ";
    return os;
}
