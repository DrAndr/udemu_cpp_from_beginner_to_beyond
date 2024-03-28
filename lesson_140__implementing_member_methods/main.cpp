/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 140 [ Implementing Member Methods  ]
 *
 * Expected result:
 */

#include <iostream>
#include <string>

#include "Account.h"

using namespace std;

void Account::set_name(string n) { name = n; }
string Account::get_name() { return name; }

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

int main()
{

    cout << endl;

    return 0;
}
