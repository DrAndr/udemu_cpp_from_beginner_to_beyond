/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 140 [ Implementing Member Methods ]
 *
 * Expected result:
                Deposit OK.
                Withdraw OK.
                Not sufficient found.
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
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
        cout << "Deposit OK." << endl;
    else
        cout << "Deposit not allowed." << endl;

    if (frank_account.withdraw(500.0))
        cout << "Withdraw OK." << endl;
    else
        cout << "Not sufficient found." << endl;

    //...

    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK." << endl;
    else
        cout << "Not sufficient found." << endl;

    cout << endl;

    return 0;
}
