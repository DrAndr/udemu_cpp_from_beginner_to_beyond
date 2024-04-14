/**
 * Section 14
 * Subject: Operator Overloading
 *
 * Lesson 164 [ Overloading The Stream Insertion adn Extraction operators ]
 *
 * Expected result:
            _________lesson_164_________ 
                   
            Enter the third stooge's first name:
            Marlly
            Move Assignment used [this->str = Marlly]
            The three stoogles are: Lary, Moe, Marlly
            Luy Jack Mad
            Move Assignment used [this->str = Luy]
            Move Assignment used [this->str = Jack]
            Move Assignment used [this->str = Mad]
            The updated stoogles list:
            The three stoogles are: Luy, Jack, Mad
 */

#include <iostream>
#include <vector>

#include "Mystring.h"

using namespace std;

int main()
{
    cout << "_________lesson_164_________" << endl;
    cout << boolalpha << endl;

    Mystring larry{"Lary"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout << "Enter the third stooge's first name: " << endl;
    cin >> curly;
    cout << "The three stoogles are: " << larry << ", " << moe << ", " << curly << endl;

    cin >> larry >> moe >> curly;
    cout << "The updated stoogles list: " << endl;

    cout << "The three stoogles are: " << larry << ", " << moe << ", " << curly << endl;

    cout << endl;
    return 0;
}
