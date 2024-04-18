#include <iostream>
#include "Account.h"

Account::Account(/* args */) : balance{0.0}, name{"An Account"} {}
Account::~Account() {}
void Account::deposit(double ammount)
{
    std::cout << "Account deposit called with: " << ammount << std::endl;
}
void Account::withdraw(double ammount)
{
    std::cout << "Account withdraw called with: " << ammount << std::endl;
}
