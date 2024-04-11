/**
 * Section 14
 * Subject: Operator Overloading
 *
 * Lesson 162 [ Overloading_Operator_as_Member_Function ]
 *      Binary operatos as member methods ( +, -, ==, !=, <, >, etc... )
 *          ReturnType Type::operatorOp( Const Type &rhs );
 * -------------------------------------------------------------
 *          Number Number::operator+( const Number &rhs ) const;
 *          Number Number::operator-( const Number &rhs ) const;
 *          bool Number::operator==( const Number &rhs ) const;
 *          bool Number::operator<( const Number &rhs ) const;
 * -------------------------------------------------------------
 *
 * Expected result:
 */

#include <iostream>
#include <vector>

#include "Mystring.h"

using namespace std;

int main()
{
    cout << "_________lesson_162_________" << endl;
    cout << boolalpha << endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display(); // Larry
    moe.display();   // Moe

    cout << " \n--- Str to lowercase --- " << endl;

    larry.display(); // Larry
    Mystring larry_2 = -larry;
    larry_2.display(); // larry

    cout << " \n--- Is equal \"==\" --- " << endl;
    cout << "(larry == moe)____: " << (larry == moe) << endl;     // false
    cout << "(larry == stooge)_: " << (larry == stooge) << endl;  // true
    cout << "(larry == larry_2): " << (larry == larry_2) << endl; // false
    cout << "(moe == \"Moe\")____: " << (moe == "Moe") << endl;   // true

    cout << " \n--- Is not equal \"!=\" --- " << endl;
    cout << "(moe != larry)____: " << (moe != larry) << endl;    // true
    cout << "(larry != moe)____: " << (larry != moe) << endl;    // true
    cout << "(larry != stooge)_: " << (larry != stooge) << endl; // false

    // Mystring stooges = larry + "Moe";
    // Mystring stooges = "Moe" + larry; // Compiler error

    // Mystring two_stooges = larry + " " + "Moe";
    // two_stooges.display(); // Larry Moe

    // Mystring tree_stooges = larry + " " + Moe + " " + "Curly";
    // tree_stooges.display(); // Larry Moe Curly

    cout << endl;
    return 0;
}
