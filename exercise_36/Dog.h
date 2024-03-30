
#include <iostream>

using namespace std;

class Dog
{
private:
    string name;
    int age{};

public:
    void set_name(std::string name)
    {
        this->name = name;
        return;
    };
    std::string get_name() { return this->name; };

    void set_age(int age)
    {
        this->age = age;
        return;
    };
    int get_age() { return this->age; };

    void print_sats() { cout << "Name: " << this->name << "; \nAge: " << this->age << endl; };
};
