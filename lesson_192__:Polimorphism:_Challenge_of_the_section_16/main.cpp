/**
 * Section 16
 * Subject: Polimorphism
 * Lesson 192 [ Challenge ]
 * 
 * Description.txt
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

    cout << "\n====== Savings Account Class usage ======" << endl;
    vector<Account *> sv_accounts;

    Account *sa_1 = new Savings_Account();
    Account *sa_2 = new Savings_Account("Superman");
    Account *sa_3 = new Savings_Account("Batman", 2000);
    Account *sa_4 = new Savings_Account("Halk", 5000, 5.0);

    sv_accounts.push_back(sa_1);
    sv_accounts.push_back(sa_2);
    sv_accounts.push_back(sa_3);
    sv_accounts.push_back(sa_4);

    display(sv_accounts);
    deposit(sv_accounts, 1000.0);
    withdraw(sv_accounts, 2000.0);

    cout << "\n====== Check_Account Class usage ======" << endl;
    Account *ca_1 = new Checking_Account();
    Account *ca_2 = new Checking_Account("Kirk");
    Account *ca_3 = new Checking_Account("Spock", 2000);
    Account *ca_4 = new Checking_Account("Bones", 5000);
    vector<Account *> checck_accs{ca_1, ca_2, ca_3, ca_4};

    display(checck_accs);
    deposit(checck_accs, 1000.0);
    withdraw(checck_accs, 2000.0);

    cout << "\n====== Trust_Account Class usage ======" << endl;

    vector<Account *> trust_accs;

    Account *ta_1 = new Trust_Account();
    Account *ta_2 = new Trust_Account("Athos", 10000, 5.0);
    Account *ta_3 = new Trust_Account("Portohos", 20000, 4.0);
    Account *ta_4 = new Trust_Account("Aramis", 30000);

    trust_accs.push_back(ta_1);
    trust_accs.push_back(ta_2);
    trust_accs.push_back(ta_3);
    trust_accs.push_back(ta_4);

    display(trust_accs);
    deposit(trust_accs, 1000.0);
    withdraw(trust_accs, 3000.0);

    cout << "\n====== Trust_Account withdraw 5 times ======" << endl;
    for (int i = 0; i < 5; i++)
        withdraw(trust_accs, 1000.0);

    delete sa_1;
    delete sa_2;
    delete sa_3;
    delete sa_4;
    //////
    delete ca_1;
    delete ca_2;
    delete ca_3;
    delete ca_4;
    //////
    delete ta_1;
    delete ta_2;
    delete ta_3;
    delete ta_4;

    cout << "\n-= END =-" << endl;
    return 0;
}
