#include <iostream>
#include <string>
#include "Account.h"

// Account::Account(/* args */) : balance{default_balance}, name{default_name} {}
Account::Account(std::string name, double balance) : balance{balance}, name{name} {}
Account::~Account() {}
bool Account::deposit(double ammount)
{
    if (ammount <= 0)
        return false;
    else
        balance += ammount;
    return true;
}
bool Account::withdraw(double ammount)
{
    if (balance < ammount)
        return false;

    std::cout << "Insufficient funds;" << std::endl;
    balance -= ammount;
    return true;
}

std::ostream &operator<<(std::ostream &os, const Account &source)
{
    os << source.name << " : " << source.balance << "; ";
    return os;
}

double Account::get_balance() const
{
    return this->balance;
}
