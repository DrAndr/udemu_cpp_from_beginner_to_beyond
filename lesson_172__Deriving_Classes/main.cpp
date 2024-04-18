/**
 * Section 15
 * Subject: Inheritance
 * Lesson 172 [ Deriving Classes from Existing Classes ]
 *
 * Expected result:
        ====== Account Class usage ======
        Account deposit called with: 2000
        Account withdraw called with: 500

        Own vallues of the Account class
        acc.balance: 0
        aacc.name: An Account

        -------ptr--------
        Account deposit called with: 1000
        Account withdraw called with: 500

        ====== Savings Account Class usage ======
        Savings_Account deposit called with: 4000
        Savings_Account withdraw called with: 700

        Vllues inheried from Account class
        sav_acc.balance: 0
        sav_acc.name: An Account

        Own vallues of the Saving_Account class
        sav_acc.int_rate: 3

        -------ptr--------
        Savings_Account deposit called with: 3000
        Savings_Account withdraw called with: 800

        Vllues inheried from Account class
        p_sav_acc->balance: 0
        (*p_sav_acc).name: An Account

        Own vallues of the Saving_Account class
        p_sav_acc->int_rate: 3

        -= END =-
 */

#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout << "\n====== Account Class usage ======" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout << "\nOwn vallues of the Account class" << endl;
    cout << "acc.balance: " << acc.balance << endl;
    cout << "aacc.name: " << acc.name << endl;

    cout << "\n-------ptr--------" << endl;
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);

    delete p_acc;

    cout << "\n====== Savings Account Class usage ======" << endl;
    Savings_Account sav_acc{};
    sav_acc.deposit(4000.0);
    sav_acc.withdraw(700.0);

    cout << "\nVllues inheried from Account class" << endl;
    cout << "sav_acc.balance: " << sav_acc.balance << endl;
    cout << "sav_acc.name: " << sav_acc.name << endl;

    cout << "\nOwn vallues of the Saving_Account class" << endl;
    cout << "sav_acc.int_rate: " << sav_acc.int_rate << endl;

    cout << "\n-------ptr--------" << endl;
    Savings_Account *p_sav_acc{nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(3000.0);
    p_sav_acc->withdraw(800.0);

    cout << "\nVllues inheried from Account class" << endl;
    cout << "p_sav_acc->balance: " << p_sav_acc->balance << endl;
    cout << "(*p_sav_acc).name: " << (*p_sav_acc).name << endl;

    cout << "\nOwn vallues of the Saving_Account class" << endl;
    cout << "p_sav_acc->int_rate: " << p_sav_acc->int_rate << endl;
    delete p_sav_acc;

    cout << "\n-= END =-" << endl;
    return 0;
}
