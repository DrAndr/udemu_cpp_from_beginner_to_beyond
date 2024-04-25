#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>

// Abstract base class Animal

class Animal
{
protected:
    std::string name;
    int age;

public:
    Animal(const std::string &name, int age);

    virtual std::string get_noise() = 0; // Pure virtual function
    virtual int get_num_legs() = 0;      // Pure virtual function

    virtual std::string get_name() { return name; }
    virtual int get_age() { return age; }
    virtual ~Animal(){};
};

#endif //_ANIMAL_H