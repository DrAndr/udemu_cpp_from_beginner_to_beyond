/**
 * Section 13
 * Exercise 37
 * Subject: OOP Classes and objects
 *
 * Problem title: Add more public methods to an existing class
    // Given an existing Dog class in Dog.h, add the following public method to the class:
    // get_human_years() return the dog's age * 7
    // speak()  returns the std::string "Woof"
    // Please add your code in the Dog.h file.
 *
 * Expected result:
        Name: Spark;
        Age: 5
        Speak: Woof
        Get human age: 35
        --------
        Name: Rex;
        Age: 3
        Speak: Woof
        Get human years: 21
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
    cout << "Speak: " << pet_2.speak() << endl;
    cout << "Get human age: " << pet_2.get_human_years() << endl;

    cout << "--------" << endl;

    pet->print_sats();
    cout << "Speak: " << pet->speak() << endl;
    cout << "Get human years: " << pet->get_human_years() << endl;

    delete pet;
    cout << endl;
    return 0;
}
