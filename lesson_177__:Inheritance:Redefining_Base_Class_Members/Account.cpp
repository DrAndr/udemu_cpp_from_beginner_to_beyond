#include <iostream>
#include "Account.h"

Account::Account(/* args */) : balance{0.0}, name{"An Account"} {}
Account::Account(double balance, std::string name = "An Account") : balance{balance}, name{name} {}
Account::~Account() {}
void Account::deposit(double ammount) { balance += ammount; }
void Account::withdraw(double ammount)
{
    if (balance >= ammount)
        balance -= ammount;
    else
        std::cout << "Insufficient funds;" << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &os, const Account &source)
{
    os << source.name << " : " << source.balance << "; " ;
    return os;
}
