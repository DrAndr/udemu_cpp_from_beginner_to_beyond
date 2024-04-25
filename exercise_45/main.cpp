/**
 * Section 16
 * Exercise 45
 * Subject: Polimorphism
 *
 * Problem title: [ Inheritance - Bark Dog, Bark! ]
 *
 * Condition: in the file READMY.md
 *
 * Expected result:
            Dog dog{"Spot", 5};
            dog.get_noise() = Woof
            dog.get_num_legs() = 4
            dog.get_age() = 5
            dog.get_name() = Spot

            ====Your program should also pass the following tests that use a pointer to Dog and a Base class pointer: ====
            Dog *dog_ptr = new Dog{"Spot", 5};
            dog_ptr->get_noise() = Woof
            dog_ptr->get_num_legs() = 4
            dog_ptr->get_age() = 5
            dog_ptr->get_name() = Spot

            ==== ==== ====
            Animal *animal_ptr = new Dog{"Spot", 5};
            animal_ptr->get_noise() = Woof
            animal_ptr->get_num_legs() = 4
            animal_ptr->get_age() = 5
            animal_ptr->get_name() = Spot
 */

#include <iostream>

#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{

    Dog dog{"Spot", 5};
    cout << "Dog dog{\"Spot\", 5};" << endl;
    cout << "dog.get_noise() = " << dog.get_noise() << endl;       // I expect a "Woof"
    cout << "dog.get_num_legs() = " << dog.get_num_legs() << endl; // I expect back 4
    cout << "dog.get_age() = " << dog.get_age() << endl;           // I expect back 5
    cout << "dog.get_name() = " << dog.get_name() << endl;         // I expect Spot

    cout << "\n====Your program should also pass the following tests that use a pointer to Dog and a Base class pointer: ====" << endl;

    Dog *dog_ptr = new Dog{"Spot", 5};
    cout << "Dog *dog_ptr = new Dog{\"Spot\", 5};" << endl;
    cout << "dog_ptr->get_noise() = " << dog_ptr->get_noise() << endl;       // I expect a "Woof"
    cout << "dog_ptr->get_num_legs() = " << dog_ptr->get_num_legs() << endl; // I expect 4
    cout << "dog_ptr->get_age() = " << dog_ptr->get_age() << endl;           // I expect 5
    cout << "dog_ptr->get_name() = " << dog_ptr->get_name() << endl;         // I expect Spot

    cout << "\n==== ==== ====" << endl;

    Animal *animal_ptr = new Dog{"Spot", 5};
    cout << "Animal *animal_ptr = new Dog{\"Spot\", 5};" << endl;
    cout << "animal_ptr->get_noise() = " << animal_ptr->get_noise() << endl;       // I expect a "Roar"
    cout << "animal_ptr->get_num_legs() = " << animal_ptr->get_num_legs() << endl; // I expect back 4
    cout << "animal_ptr->get_age() = " << animal_ptr->get_age() << endl;           // I expect back 4
    cout << "animal_ptr->get_name() = " << animal_ptr->get_name() << endl;         // I expect back 4

    delete dog_ptr;
    delete animal_ptr;
    cout << endl;
    return 0;
}
