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

    // cout << (larry == moe) << endl;    // false
    // cout << (larry == stooge) << endl; // true

    larry.display(); // Larry
    Mystring larry_2 = -larry;
    larry_2.display(); // larry

    // Mystring stooges = larry + "Moe";
    // Mystring stooges = "Moe" + larry; // Compiler error

    // Mystring two_stooges = larry + " " + "Moe";
    // two_stooges.display(); // Larry Moe

    // Mystring tree_stooges = larry + " " + Moe + " " + "Curly";
    // tree_stooges.display(); // Larry Moe Curly

    cout << endl;
    return 0;
}
