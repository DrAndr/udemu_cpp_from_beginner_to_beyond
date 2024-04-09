/**
 * Section 14
 * Subject: Operator Overloading
 *
 * Lesson 161 [ Overloading the Assignment operator MOVE ]
 *      Pattern of overloading assigment operator (MOVE):
 *          Type &Type::operator=( Type &&rhs );
 *
 * Expected result:
    _________lesson_161_________
    Hello : 5
    Move Assignment used [this->str = Hola]
    Destructor of [0x7ff7b911d4a8] str: nullptr
    Hola : 4
    Move Assignment used [this->str = Bonjour]
    Destructor of [0x7ff7b911d4a0] str: nullptr
    Bonjour : 7
    Destructor of [0x7ff7b911d4c0] str: Bonjour
 */

#include <iostream>
#include <vector>

#include "Mystring.h"

using namespace std;

int main()
{
    {
        cout << "_________lesson_161_________" << endl;
        Mystring a{"Hello"};  // overloaded constructor
        a.display();          //
        a = Mystring("Hola"); // run overloading construct, then run MOVE assignment
        a.display();          //
        a = "Bonjour";        // run overloading construct, then run MOVE assignment
        a.display();          //
    }

    cout << endl;
    return 0;
}
