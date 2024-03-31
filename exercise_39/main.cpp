/**
 * Section 13
 * Exercise 37
 * Subject: OOP Classes and objects
 *
 * Problem title: Add an Overloaded Constructor to an Existing Class
 *
 *      Given the Dog class defined in Dog.h, add an overloaded constructor that expect a std::string and int as parameters.
 *      The constructor should allow us to create  Dog objects as follows:
            Dog fido {"Fido", 4};
            Dog spot {"Spot", 5};
 *      Please add your code to the Dog.h file.
 *
 * Expected result:
                    Name: Fido; 
                    Age: 4
                    Speak: Woof
                    Get human years: 28
                    -------------------
                    Name: Spot; 
                    Age: 5
                    Speak: Woof
                    Get human years: 35
 *
 */

#include <iostream>

#include "Dog.h"

using namespace std;

// definition of the overloaded constructor 
Dog::Dog(string name, int age)
{
    this->name = name;
    this->age = age;
}

int main()
{

    Dog fido{"Fido", 4};

    fido.print_sats();
    cout << "Speak: " << fido.speak() << endl;
    cout << "Get human years: " << fido.get_human_years() << endl;
    cout << "-------------------" << endl;

    Dog *spot = new Dog("Spot", 5);
    spot->print_sats();
    cout << "Speak: " << spot->speak() << endl;
    cout << "Get human years: " << spot->get_human_years() << endl;

    delete spot;
    cout << endl;
    return 0;
}
