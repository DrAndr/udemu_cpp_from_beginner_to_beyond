#include <iostream>
#include "Account.h"

void Account::deposit(double ammount)
{
    std::cout << "Account deposit called with: " << ammount << std::endl;
}
void Account::withdraw(double ammount)
{
    std::cout << "Account withdraw called with: " << ammount << std::endl;
}
Account::Account(/* args */) {}
Account::~Account() {}