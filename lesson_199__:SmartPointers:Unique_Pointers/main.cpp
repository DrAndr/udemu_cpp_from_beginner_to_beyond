/**
 * Section 17
 * Subject: Smart Pointers
 * Lesson 199 [ Unique Pointers ]
 *
 * Expected result:
        a2->get_balance(): 5000.00
        a1: 0x7f8fd5705a80
        *a1: [Checking_accoutn: Spock : 2000.00, int rate: 1.50%]; 
        a3: 0x7f8fd5705a80
        *a3: [Checking_accoutn: Spock : 2000.00, int rate: 1.50%]; 

        ====== Trust_Account Class usage ======

        ___Account___
        [Trust_accoutn: Unnamed Saving Account : 0.00, int rate: 0.00%]; 
        [Trust_accoutn: Athos : 10000.00, int rate: 5.00%]; 
        [Trust_accoutn: Portohos : 20000.00, int rate: 4.00%]; 
        [Trust_accoutn: Aramis : 30000.00, int rate: 0.00%]; 

        ___Depositing to Account___
        Deposited 1000.00 to [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Deposited 1000.00 to [Trust_accoutn: Athos : 11050.00, int rate: 5.00%]; 
        Deposited 1000.00 to [Trust_accoutn: Portohos : 21040.00, int rate: 4.00%]; 
        Deposited 1000.00 to [Trust_accoutn: Aramis : 31000.00, int rate: 0.00%]; 

        ___Withdrawing from Account___
        Failed Wihdrawal of 3000.00 from [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Failed Wihdrawal of 3000.00 from [Trust_accoutn: Athos : 11050.00, int rate: 5.00%]; 
        Insufficient funds;
        Wihdrew 3000.00 from [Trust_accoutn: Portohos : 18040.00, int rate: 4.00%]; 
        Insufficient funds;
        Wihdrew 3000.00 from [Trust_accoutn: Aramis : 28000.00, int rate: 0.00%]; 

        ====== Trust_Account withdraw 5 times ======

        ___Withdrawing from Account___
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Athos : 10050.00, int rate: 5.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Portohos : 17040.00, int rate: 4.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Aramis : 27000.00, int rate: 0.00%]; 

        ___Withdrawing from Account___
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Athos : 9050.00, int rate: 5.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Portohos : 16040.00, int rate: 4.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Aramis : 26000.00, int rate: 0.00%]; 

        ___Withdrawing from Account___
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Insufficient funds;
        Wihdrew 1000.00 from [Trust_accoutn: Athos : 8050.00, int rate: 5.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Portohos : 16040.00, int rate: 4.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Aramis : 26000.00, int rate: 0.00%]; 

        ___Withdrawing from Account___
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Athos : 8050.00, int rate: 5.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Portohos : 16040.00, int rate: 4.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Aramis : 26000.00, int rate: 0.00%]; 

        ___Withdrawing from Account___
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Unnamed Saving Account : 1000.00, int rate: 0.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Athos : 8050.00, int rate: 5.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Portohos : 16040.00, int rate: 4.00%]; 
        Failed Wihdrawal of 1000.00 from [Trust_accoutn: Aramis : 26000.00, int rate: 0.00%]; 

        -= END =-
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
    std::cout.precision(2);
    std::cout << fixed;

    unique_ptr<Account> a1{new Checking_Account("Spock", 2000)};

    unique_ptr<Account> a2 = make_unique<Checking_Account>("Bones", 5000);
    std::cout << "a2->get_balance(): " << a2->get_balance() << endl;
    std::cout << "a1: " << a1 << endl;
    std::cout << "*a1: " << *a1 << endl;
    unique_ptr<Account> a3 = move(a1);
    cout << "a3: " << a3 << endl;
    cout << "*a3: " << *a3 << endl;

    std::cout << "\n====== Trust_Account Class usage ======" << endl;

    vector<unique_ptr<Account>> trust_accs;

    unique_ptr<Account> ta_1{new Trust_Account()};
    unique_ptr<Account> ta_2{new Trust_Account("Athos", 10000, 5.0)};
    unique_ptr<Account> ta_3{new Trust_Account("Portohos", 20000, 4.0)};
    unique_ptr<Account> ta_4{new Trust_Account("Aramis", 30000)};

    trust_accs.push_back(move(ta_1));
    trust_accs.push_back(move(ta_2));
    trust_accs.push_back(move(ta_3));
    trust_accs.push_back(move(ta_4));

    display(trust_accs);
    deposit(trust_accs, 1000.0);
    withdraw(trust_accs, 3000.0);

    cout << "\n====== Trust_Account withdraw 5 times ======" << endl;
    for (int i = 0; i < 5; i++)
        withdraw(trust_accs, 1000.0);

    //////
    // delete ta_1;
    // delete ta_2;
    // delete ta_3;
    // delete ta_4;

    cout << "\n-= END =-" << endl;
    return 0;
}
