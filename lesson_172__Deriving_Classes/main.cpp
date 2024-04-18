/**
 * Section 15
 * Subject: Inheritance
 * Lesson 172 [ Deriving Classes from Existing Classes ]
 *
 * Expected result:
 */

#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout << "====== Account Class usage ======" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout << "-------ptr--------" << endl;
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);

    delete p_acc;

    cout << "====== Savings Account Class usage ======" << endl;
    Savings_Account s_acc{};
    s_acc.deposit(4000.0);
    s_acc.withdraw(700.0);

    cout << "-------ptr--------" << endl;
    Account *p_s_acc{nullptr};
    p_s_acc = new Account();
    p_s_acc->deposit(3000.0);
    p_s_acc->withdraw(800.0);
    cout << "-= END =-" << endl;
    return 0;
}
