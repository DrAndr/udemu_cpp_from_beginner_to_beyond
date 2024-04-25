#ifndef _LION_H
#define _LION_H

#include <string>
#include "Animal.h"

class Lion : public Animal
{
protected:
    std::string noise = "Roar";
    int num_legs = 4;

public:
    virtual std::string get_noise() const override; // Pure virtual function
    virtual int get_num_legs() const override;      // Pure virtual function
    virtual ~Lion(){};
};

#endif //_LION_H