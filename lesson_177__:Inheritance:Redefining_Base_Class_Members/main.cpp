/**
 * Section 15
 * Subject: Inheritance
 * Lesson 177 [ Redefining Base Class Methods ]
 *
 * Expected result:
            ====== Account Class usage ======
            My account : 1000;
            My account : 1500;
            My account : 500;
            Insufficient funds;
            My account : 500;

            -------ptr--------
            *ptr account : 1000;
            *ptr account : 1500;
            *ptr account : 500;
            Insufficient funds;
            *ptr account : 500;

            ====== Savings Account Class usage ======
            My savings account : 1000, int rate: 5%;
            My savings account : 1525, int rate: 5%;
            My savings account : 525, int rate: 5%;
            Insufficient funds;
            My savings account : 525, int rate: 5%;

            -------ptr--------
            *ptr account : 1000, int rate: 5%;
            *ptr account : 1525, int rate: 5%;
            *ptr account : 525, int rate: 5%;
            Insufficient funds;
            *ptr account : 525, int rate: 5%;

            -= END =-
 */

#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout << "\n====== Account Class usage ======" << endl;
    {
        Account acc{1000.0, "My account"};
        cout << acc << endl;

        acc.deposit(500.0);
        cout << acc << endl;

        acc.withdraw(1000.0);
        cout << acc << endl;

        acc.withdraw(5000.0);
        cout << acc << endl;

        cout << "\n-------ptr--------" << endl;
        Account *p_acc{nullptr};
        p_acc = new Account(1000.0, "*ptr account");
        cout << *p_acc << endl;

        p_acc->deposit(500.0);
        cout << *p_acc << endl;

        p_acc->withdraw(1000.0);
        cout << *p_acc << endl;

        p_acc->withdraw(5000.0);
        cout << *p_acc << endl;

        delete p_acc;
    };
    cout << "\n====== Savings Account Class usage ======" << endl;
    {
        Savings_Account sav{1000.0, 5.0, "My savings account"};
        cout << sav << endl;

        sav.deposit(500.0);
        cout << sav << endl;

        sav.withdraw(1000.0);
        cout << sav << endl;

        sav.withdraw(5000.0);
        cout << sav << endl;

        cout << "\n-------ptr--------" << endl;
        Savings_Account *p_acc{nullptr};
        p_acc = new Savings_Account(1000.0, 5.0, "*ptr account");
        cout << *p_acc << endl;

        p_acc->deposit(500.0);
        cout << *p_acc << endl;

        p_acc->withdraw(1000.0);
        cout << *p_acc << endl;

        p_acc->withdraw(5000.0);
        cout << *p_acc << endl;

        delete p_acc;
    };
    cout << "\n-= END =-" << endl;
    return 0;
}
