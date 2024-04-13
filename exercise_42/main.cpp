/**
 * Section 14
 * Exercise 42
 * Subject: Operator Overloading
 *
 * Problem title: [ Operator Overloading as NON-Member Functions ]
 *
 *      Given the provided Money class,  please add the overloaded  + operator so that
 *      it will add two Money objects together and return a Money object representing
 *      their sum.

        This overloaded operator should return a Money object and should be implemented as
        a non-member friend function.

        First, add the overloaded operator function declaration to the Money class
        declaration in Money.h

        Second, add the overloaded operator function definition in Money.cpp
 *
 * Expected result:
 *      bill_3: 8,25
 */

#include <iostream>

#include "Money.h"

using namespace std;

int main()
{

    Money bill_1{2,50};
    Money bill_2{5,75};

    Money bill_3 = bill_2 + bill_1;

    cout << boolalpha << endl;

    cout << "bill_3: " << bill_3.get_dollars() << "," << bill_3.get_cents() << endl;

    cout << endl;
    return 0;
}
