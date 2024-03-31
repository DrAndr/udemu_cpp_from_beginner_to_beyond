/**
 * Section 13
 * Exercise 40
 * Subject: OOP Classes and objects
 *
 * Problem title: Add a Copy Constructor to an Existing Class
 *
 *      Given the Dog class defined in Dog.h, add a Copy constructor.

        The copy constructor should copy the attributes from one object to another.
        Also, please display, "Copy Constructor" to cout in the body of your copy constructor. Do not follow the output statement with '\n' or endl

        The copy constructor should allow us to create  Dog objects as follows:
            // Dog spot {"Spot", 5};   // Overloaded constuctor
            // Dog twin {spot};        // Copy constructor, twin will be a copy of spot
 *
 * Expected result:
                    ----- Spot: -----
                    Name: Spot;
                    Age: 5
                    Speak: Woof
                    Get human years: 35
                    ----- Twin: -----
                    --> Copy Constructor:
                    Name: Spot;
                    Age: 5
                    Speak: Woof
                    Get human years: 35
 *
 */

#include <iostream>

#include "Dog.h"

using namespace std;

int main()
{
    cout << "----- Spot: -----" << endl;

    Dog *spot = new Dog("Spot", 5);
    spot->print_sats();
    cout << "Speak: " << spot->speak() << endl;
    cout << "Get human years: " << spot->get_human_years() << endl;

    cout << "----- Twin: -----" << endl;

    Dog *twin = new Dog((*spot));
    twin->print_sats();
    cout << "Speak: " << twin->speak() << endl;
    cout << "Get human years: " << twin->get_human_years() << endl;

    delete spot;
    delete twin;
    cout << endl;
    return 0;
}
