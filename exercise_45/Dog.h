#ifndef _LION_H
#define _LION_H

#include <string>
#include "Animal.h"

class Dog : public Animal
{
protected:
public:
    Dog(const std::string &name = "", int age = 0);

    virtual std::string get_noise() override;
    virtual int get_num_legs() override;

    virtual std::string get_name() override;
    virtual int get_age() override;
    virtual ~Dog(){};
};

#endif //_LION_H