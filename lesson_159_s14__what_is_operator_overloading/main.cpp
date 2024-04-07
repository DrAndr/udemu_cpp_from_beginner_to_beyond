/**
 * Section 14
 * Subject: Operator Overloading
 * Lesson 159 [ what is operator overloading ]
 *
 * Expected result:
             : 0
            Larry : 5
            Larry : 5
 */

#include <iostream>
#include <vector>

#include "Mystring.h"

using namespace std;

int main()
{

    Mystring empty;          // noa-rgs constructor
    Mystring larry{"Larry"}; // overloaded constructor
    Mystring stoogle{larry}; // copy constructor

    empty.display();
    larry.display();
    stoogle.display();

    cout << endl;
    return 0;
}
