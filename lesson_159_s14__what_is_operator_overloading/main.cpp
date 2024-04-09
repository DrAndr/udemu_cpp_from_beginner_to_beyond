/**
 * Section 14
 * Subject: Operator Overloading
 * Lesson 159 [ what is operator overloading ]
 *
 * Lesson 160 [ Overloading the Assignment operator ]
 *      Pattern of overloading assigment operator:
 *          Type &Type::operator=(const Type &rhs);
 *
 * Expected result:
 *          Hello : 5
            Overloading Assignment Operator...
            Hello : 5
            Overloading Assignment Operator...
            This is a test : 14
            ------------------
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
    // lesson_160
    Mystring a{"Hello"};  // overloaded constructor
    Mystring b;           // noa-rgs constructor
    a.display();          //
    b = a;                // Copy assignment // b.operattor=(a)
    b.display();          //
    b = "This is a test"; // Copy assignment // b.operattor=("This is a test");
    b.display();
    cout << "------------------" << endl;
    // lesson_159
    Mystring empty;          // noa-rgs constructor
    Mystring larry{"Larry"}; // overloaded constructor
    Mystring stoogle{larry}; // copy constructor

    empty.display();
    larry.display();
    stoogle.display();

    cout << endl;
    return 0;
}
