/**
 * Section 13
 * Exercise 37
 * Subject: OOP Classes and objects
 *
 * Problem title: Add a Default Constructor to an Existing Class
 *          Given the Dog class in Dog.h, add a default no-args constructor
 *          that initializes the dog's name to "None" and the dog's age to zero.
 *          Please add your code to the Dog.h file.
 *
 * Expected result:
            Name: None;
            Age: 0
            Speak: Woof
            Get human years: 0
 *
 */

#include <iostream>

#include "Dog.h"

using namespace std;

Dog test_dog();
int main()
{
    Dog *pet{new Dog};
    pet->print_sats();
    cout << "Speak: " << pet->speak() << endl;
    cout << "Get human years: " << pet->get_human_years() << endl;

    delete pet;
    cout << endl;
    return 0;
}
