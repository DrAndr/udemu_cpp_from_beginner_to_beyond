#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account(name, balance), int_rate{int_rate} {};

Savings_Account::~Savings_Account() {}

bool Savings_Account::deposit(double ammount)
{
    if (ammount <= 0)
        return false;

    ammount = ammount + (ammount * int_rate / 100);
    return Account::deposit(ammount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &source)
{
    os << "[Saving_accoutn: " << source.name << " : " << source.balance << ", int rate: " << source.int_rate << "%] ";
    return os;
}
