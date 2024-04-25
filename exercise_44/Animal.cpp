#include <iostream>
#include <string>
#include "Animal.h"
std::string Animal::get_noise() const { return noise; }; // Pure virtual function
int Animal::get_num_legs() const { return num_legs; };   // Pure virtual function