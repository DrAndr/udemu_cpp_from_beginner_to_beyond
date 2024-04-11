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
                _________lesson_162_________

                Copy Constructor used;
                Larry
                Moe

                --- Str to lowercase ---
                Larry
                larry

                --- Is equal "==" ---
                (larry == moe)____: false
                (larry == stooge)_: true
                (larry == larry_2): false
                (moe == "Moe")____: true
                Destructor of [0x7ff7b4120480] str: Moe

                --- Is not equal "!=" ---
                (moe != larry)____: true
                (larry != moe)____: true
                (larry != stooge)_: false

                --- Concatination via "+" ---
                Destructor of [0x7ff7b4120470] str: Moe
                LarryMoe
                Destructor of [0x7ff7b4120450] str: Moe
                Destructor of [0x7ff7b4120460] str: Larry
                Destructor of [0x7ff7b4120458] str:
                Larry Moe
                Destructor of [0x7ff7b4120418] str: Curly
                Destructor of [0x7ff7b4120440] str: Larry Moe
                Destructor of [0x7ff7b4120420] str:
                Destructor of [0x7ff7b4120438] str: Larry Moe
                Destructor of [0x7ff7b4120430] str: Larry
                Destructor of [0x7ff7b4120428] str:
                Larry Moe Curly
                Destructor of [0x7ff7b4120448] str: Larry Moe Curly
                Destructor of [0x7ff7b4120468] str: Larry Moe
                Destructor of [0x7ff7b4120478] str: LarryMoe
                Destructor of [0x7ff7b4120488] str: larry
                Destructor of [0x7ff7b4120490] str: Larry
                Destructor of [0x7ff7b41204a8] str: Moe
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
