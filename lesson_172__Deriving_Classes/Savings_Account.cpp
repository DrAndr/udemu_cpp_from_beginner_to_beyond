#include <iostream>
#include "Savings_Account.h"

void Savings_Account::deposit(double ammount)
{
    std::cout << "Savings_Account deposit called with: " << ammount << std::endl;
}
void Savings_Account::withdraw(double ammount)
{
    std::cout << "Savings_Account withdraw called with: " << ammount << std::endl;
}
Savings_Account::Savings_Account(/* args */) {}
Savings_Account::~Savings_Account() {}
