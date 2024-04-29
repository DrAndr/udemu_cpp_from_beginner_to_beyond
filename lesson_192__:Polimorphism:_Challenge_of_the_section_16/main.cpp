/**
 * Section 16
 * Subject: Inheritance
 * Lesson 180 [ Polimorphism ]
 *      Details in the Description.txt
 *
 * Expected result within ./Expected_result.txt
 */

#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
// #include "Account_Util.cpp" //Old approach

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    Checking_Account c;
    cout << c << endl;

    Savings_Account s{"Frank", 5000, 2.6};
    cout << s << endl;

    Account *ptr_t = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr_t << endl;

    // cout << "\n====== Savings Account Class usage ======" << endl;
    // vector<Savings_Account> sv_accounts;

    // sv_accounts.push_back(Savings_Account{});
    // sv_accounts.push_back(Savings_Account{"Superman"});
    // sv_accounts.push_back(Savings_Account{"Batman", 2000});
    // sv_accounts.push_back(Savings_Account{"Halk", 5000, 5.0});

    // display(sv_accounts);
    // deposit(sv_accounts, 1000.0);
    // withdraw(sv_accounts, 2000.0);

    // cout << "\n====== Check_Account Class usage ======" << endl;
    // vector<Checking_Account> checck_accs;

    // checck_accs.push_back(Checking_Account{});
    // checck_accs.push_back(Checking_Account{"Kirk"});
    // checck_accs.push_back(Checking_Account{"Spock", 2000});
    // checck_accs.push_back(Checking_Account{"Bones", 5000});

    // display(checck_accs);
    // deposit(checck_accs, 1000.0);
    // withdraw(checck_accs, 2000.0);

    // cout << "\n====== Trust_Account Class usage ======" << endl;
    // vector<Trust_Account> trust_accs;

    // trust_accs.push_back(Trust_Account{});
    // trust_accs.push_back(Trust_Account{"Athos", 10000, 5.0});
    // trust_accs.push_back(Trust_Account{"Portohos", 20000, 4.0});
    // trust_accs.push_back(Trust_Account{"Aramis", 30000});

    // display(trust_accs);
    // deposit(trust_accs, 1000.0);
    // withdraw(trust_accs, 3000.0);

    // cout << "\n====== Trust_Account withdraw 5 times ======" << endl;
    // for (int i = 0; i < 5; i++)
    //     withdraw(trust_accs, 1000.0);

    cout << "\n-= END =-" << endl;
    return 0;
}
