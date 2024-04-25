/**
 * Section 16
 * Exercise 44
 * Subject: Polimorphism
 *
 * Problem title: [ Inheritance - Roar Lion, Roar! ]
 *
 * Condition: in the file condition.txt
 *
 * Expected result:
            Lion lion;
            lion.get_noise() = Roar
            lion.get_num_legs() = 4

            ==== I will also test the code with Animal and Lion pointers and expect the same values. ====
            Lion *lion_ptr = new Lion();
            lion_ptr->get_noise() = Roar
            lion_ptr->get_num_legs() = 4

            ==== and ====
            Animal *animal_ptr = new Lion();
            animal_ptr->get_noise() = Roar
            animal_ptr->get_num_legs() = 4
 *
 */

#include <iostream>

#include "Animal.h"
#include "Lion.h"

using namespace std;

int main()
{

    Lion lion;
    cout << "Lion lion;" << endl;
    cout << "lion.get_noise() = " << lion.get_noise() << endl;       // I expect a "Roar"
    cout << "lion.get_num_legs() = " << lion.get_num_legs() << endl; // I expect back 4

    cout << "\n==== I will also test the code with Animal and Lion pointers and expect the same values. ====" << endl;

    Lion *lion_ptr = new Lion();
    cout << "Lion *lion_ptr = new Lion();" << endl;
    cout << "lion_ptr->get_noise() = " << lion_ptr->get_noise() << endl;       // I expect a "Roar"
    cout << "lion_ptr->get_num_legs() = " << lion_ptr->get_num_legs() << endl; // I expect back 4

    cout << "\n==== and ====" << endl;

    Animal *animal_ptr = new Lion();
    cout << "Animal *animal_ptr = new Lion();" << endl;
    cout << "animal_ptr->get_noise() = " << animal_ptr->get_noise() << endl;       // I expect a "Roar"
    cout << "animal_ptr->get_num_legs() = " << animal_ptr->get_num_legs() << endl; // I expect back 4

    delete lion_ptr;
    delete animal_ptr;
    cout << endl;
    return 0;
}
