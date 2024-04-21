#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

Savings_Account::Savings_Account(/* no args */) : Savings_Account(0.0, 0.0, "Account name"){};
Savings_Account::Savings_Account(double balance, double int_rate, std::string name)
    : Account(balance, name), int_rate{int_rate} {};

Savings_Account::~Savings_Account() {}

void Savings_Account::deposit(double ammount)
{
    ammount = ammount + (ammount * int_rate / 100);
    Account::deposit(ammount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &source)
{
    os << source.name << " : " << source.balance << ", int rate: " << source.int_rate << "%; ";
    return os;
}
