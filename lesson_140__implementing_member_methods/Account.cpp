#include <iostream>
#include <string>
#include "Account.h"

void Account::set_name(std::string n) { name = n; }
std::string Account::get_name() { return name; }

bool Account::withdraw(double wd)
{
    if (balance >= wd)
    {
        balance -= wd;
        return true;
    }
    return false;
}

bool Account::deposit(double dp)
{
    if (dp > 0)
    {
        balance += dp;
        return true;
    }
    return false;
}