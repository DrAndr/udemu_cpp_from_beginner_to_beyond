/**
 * Section 14
 * Exercise 41
 * Subject: Operator Overloading
 *
 * Problem title: [ Operator Overloading as Member Functions ]
 *
 *      Given the provided Money class,  please add the overloaded equality operators == and !=

        These overloaded operators should return a bool and should be implemented as member functions.

        Given 2 Money objects, consider them to be equal if both the dollars and cents attributes are the same for both objects.

        First, add the overloaded operator function declarations to the Money class declaration in Money.h

        Second, add the overloaded operator function definitions in Money.cpp
 *
 * Expected result:
    Is it equal:       bill_1{1, 5} == bill_2{105} true
    Is it not equal:   bill_1{1, 5} != bill_2{105} false
    Is it not equal:   bill_1{1, 5} != 1111)       true
    Is it equal:       bill_3{2, 0} == 200         true
    Is it not equal:   bill_3{2, 0} != 200         false
 */

#include <iostream>

#include "Money.h"

using namespace std;

int main()
{

    Money bill_1{10, 5};
    Money bill_2{1005};

    Money bill_3{2, 0};

    cout << boolalpha << endl;

    cout << "Is it equal:       bill_1{1, 5} == bill_2{105} " << (bill_1 == bill_2) << endl;
    cout << "Is it not equal:   bill_1{1, 5} != bill_2{105} " << (bill_1 != bill_2) << endl;
    cout << "Is it not equal:   bill_1{1, 5} != 1111)       " << (bill_1 != 1111) << endl;
    cout << "Is it equal:       bill_3{2, 0} == 200         " << (bill_3 == 200) << endl;
    cout << "Is it not equal:   bill_3{2, 0} != 200         " << (bill_3 != 200) << endl;

    cout << endl;
    return 0;
}
