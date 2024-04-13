/**
 * Section 14
 * Subject: Operator Overloading
 *
 * Lesson 162 [ Overloading operators as Global Function ]
 *          Binary operatos as member methods ( +, -, ==, !=, <, >, etc... )
 *
 *          ReturnType operatorOp( const Type &lhs , const Type &rhs );
 *
 * -------------------------------------------------------------
 *          Number Number::operator+( const Number &lhs, const Number &rhs ) const;
 *          Number Number::operator-( const Number &lhs, const Number &rhs ) const;
 *          bool Number::operator==( const Number &lhs, const Number &rhs ) const;
 *          bool Number::operator<( const Number &lhs, const Number &rhs ) const;
 * -------------------------------------------------------------
 *
 * Expected result:
                _________lesson_163_________

                LARRY
                Moe

                --- Str to lowercase ---
                LARRY
                larry

                --- Is equal "==" ---
                (larry == moe)____: false
                (larry == stooge)_: true
                (larry == larry_2): false
                (moe == "Moe")____: true

                --- Is not equal "!=" ---
                (moe != larry)____: true
                (larry != moe)____: true
                (larry != stooge)_: false

                --- Concatination via "+" ---
                LARRYMoe
                LARRY Moe
                LARRY Moe Curly
 */

#include <iostream>
#include <vector>

#include "Mystring.h"

using namespace std;

int main()
{
    cout << "_________lesson_163_________" << endl;
    cout << boolalpha << endl;

    Mystring larry{"LARRY"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display(); // Larry
    cout << endl;

    moe.display(); // Moe
    cout << endl;

    cout << " \n--- Str to lowercase --- " << endl;

    larry.display(); // Larry
    cout << endl;
    Mystring larry_2 = -larry;
    larry_2.display(); // larry
    cout << endl;

    cout << " \n--- Is equal \"==\" --- " << endl;
    cout << "(larry == moe)____: " << (larry == moe) << endl;     // false
    cout << "(larry == stooge)_: " << (larry == stooge) << endl;  // true
    cout << "(larry == larry_2): " << (larry == larry_2) << endl; // false
    cout << "(moe == \"Moe\")____: " << (moe == "Moe") << endl;   // true

    cout << " \n--- Is not equal \"!=\" --- " << endl;
    cout << "(moe != larry)____: " << (moe != larry) << endl;    // true
    cout << "(larry != moe)____: " << (larry != moe) << endl;    // true
    cout << "(larry != stooge)_: " << (larry != stooge) << endl; // false

    cout << " \n--- Concatination via \"+\" --- " << endl;

    Mystring stooges = larry + "Moe";
    stooges.display(); // LarryMoe
    cout << endl;
    // Mystring stooges = "Moe" + larry; // Compiler error

    Mystring two_stooges = larry + " " + "Moe";
    two_stooges.display(); // Larry Moe
    cout << endl;

    Mystring tree_stooges = larry + " " + moe + " " + "Curly";
    tree_stooges.display(); // Larry Moe Curly

    cout << endl;
    return 0;
}
