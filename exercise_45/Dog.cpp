#include <string>
#include "Dog.h"
#include "Animal.h"

Dog::Dog(const std::string &name, int age) : Animal(name, age) {}

std::string Dog::get_noise() { return "Woof"; };
int Dog::get_num_legs() { return 4; };

std::string Dog::get_name() { return name; }
int Dog::get_age() { return age; }