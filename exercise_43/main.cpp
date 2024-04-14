/**
 * Section 14
 * Exercise 43
 * Subject: Operator Overloading
 *
 * Problem title: [ Operator Overloading the Stream Insertion Operator ]
 *
    Given the provided Money class,  please add the overloaded stream insertion <<
    operator so that it displays a Money object on a output stream as follows.

    If the Money object models 1 dollar and 70 cents, the output should be:
            Money amount {1, 70};
            std::cout << amount;
            dollars: 1 cents: 70 ,no '\n' or endl should be added.

    You ONLY need to write the overloaded operator function, our automated tester
    will create the object and test it.
    This overloaded operator should return a reference to a std::ostream object and
    should be implemented as a non-member friend function.
    First, add the overloaded friend operator function declaration to the Money class
    declaration in Money.h
    Second, add the overloaded operator function definition in Money.cpp
    This overloaded operator function should not modify the Money object in any way.
 *
 * Expected result:
        bill_1 : dollars: 12 cents: 75
        bill_2 : dollars: 5 cents: 15
        bill_3 : dollars: 0 cents: 25
 *
 */

#include <iostream>

#include "Money.h"

using namespace std;

int main()
{

    Money bill_1{12, 75};
    Money bill_2{5, 15};
    Money bill_3{25};

    cout << "bill_1 : " << bill_1 << endl;
    cout << "bill_2 : " << bill_2 << endl;
    cout << "bill_3 : " << bill_3 << endl;

    cout << endl;
    return 0;
}
