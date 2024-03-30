/**
 * Section 13
 * Exercise 36
 * Subject: OOP Classes and objects
 *
 * Problem title: Adding public methods that access private class attributes
 *
    // Given the following Dog class in Dog.h add the following public getter and setter methods that get and set each class attribute as follows:
    // get_name returns the name attribute of the dog
    // set_name sets the name attribute of the dog to the string that is passed into the method.
    // get_age returns the age attribute of the dog
    // set_age sets the age attribute of the dog to the int passed into the method.
 *
 * Expected result:
        Name: Spark; 
        Age: 5
        --------
        Name: Rex; 
        Age: 3
 *
 */

#include <iostream>

#include "Dog.h"

using namespace std;

Dog test_dog();
int main()
{
    Dog *pet{new Dog};
    pet->set_name("Rex");
    pet->set_age(3);

    Dog pet_2;
    pet_2.set_name("Spark");
    pet_2.set_age(5);

    pet_2.print_sats();
    cout << "--------" << endl;
    pet->print_sats();

    delete pet;
    cout << endl;
    return 0;
}
