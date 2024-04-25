#include <string>
#include "Lion.h"
#include "Animal.h"

std::string Lion::get_noise() const { return noise; }; // Pure virtual function
int Lion::get_num_legs() const { return num_legs; };   // Pure virtual function