#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>

// Abstract base class Animal

class Animal
{
protected:
    std::string noise = "";
    int num_legs = 0;

public:
    virtual std::string get_noise() const; // Pure virtual function
    virtual int get_num_legs() const;      // Pure virtual function
    virtual ~Animal(){};
};

#endif //_ANIMAL_H