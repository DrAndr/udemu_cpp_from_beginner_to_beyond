/**
 * Section 15
 * Subject: Inheritance
 * Lesson 179 [ The_Updated_Account_Example ]
 *
 * Expected result:
            ====== Account Class usage ======

            ___Account___
            Unnamed Account : 0.00;
            Larry : 0.00;
            Moe : 2000.00;
            Curly : 5000.00;

            ___Depositing to Account___
            Deposited 1000.00 to Unnamed Account : 1000.00;
            Deposited 1000.00 to Larry : 1000.00;
            Deposited 1000.00 to Moe : 3000.00;
            Deposited 1000.00 to Curly : 6000.00;

            ___Withdrawing from Account___
            Failed Wihdrawal of 2000.00 from Unnamed Account : 1000.00;
            Failed Wihdrawal of 2000.00 from Larry : 1000.00;
            Insufficient funds;
            Wihdrew 2000.00 from Moe : 1000.00;
            Insufficient funds;
            Wihdrew 2000.00 from Curly : 4000.00;

            ====== Savings Account Class usage ======

            ___Savings_Account___
            [Saving_accoutn: Unnamed Saving Account : 0.00, int rate: 0.00%]
            [Saving_accoutn: Superman : 0.00, int rate: 0.00%]
            [Saving_accoutn: Batman : 2000.00, int rate: 0.00%]
            [Saving_accoutn: Halk : 5000.00, int rate: 5.00%]

            ___Depositing to Savings_Account___
            Deposited 1000.00 to [Saving_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]
            Deposited 1000.00 to [Saving_accoutn: Superman : 1000.00, int rate: 0.00%]
            Deposited 1000.00 to [Saving_accoutn: Batman : 3000.00, int rate: 0.00%]
            Deposited 1000.00 to [Saving_accoutn: Halk : 6050.00, int rate: 5.00%]

            ___Withdrawing from Savings_Account___
            Failed Wihdrawal of 2000.00 from [Saving_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]
            Failed Wihdrawal of 2000.00 from [Saving_accoutn: Superman : 1000.00, int rate: 0.00%]
            Insufficient funds;
            Wihdrew 2000.00 from [Saving_accoutn: Batman : 1000.00, int rate: 0.00%]
            Insufficient funds;
            Wihdrew 2000.00 from [Saving_accoutn: Halk : 4050.00, int rate: 5.00%]

            -= END =-
 */

#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    cout << "\n====== Account Class usage ======" << endl;
    vector<Account> accounts;

    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000.0);
    withdraw(accounts, 2000.0);

    cout << "\n====== Savings Account Class usage ======" << endl;
    vector<Savings_Account> sv_accounts;

    sv_accounts.push_back(Savings_Account{});
    sv_accounts.push_back(Savings_Account{"Superman"});
    sv_accounts.push_back(Savings_Account{"Batman", 2000});
    sv_accounts.push_back(Savings_Account{"Halk", 5000, 5.0});

    display(sv_accounts);
    deposit(sv_accounts, 1000.0);
    withdraw(sv_accounts, 2000.0);
    cout << "\n-= END =-" << endl;
    return 0;
}
