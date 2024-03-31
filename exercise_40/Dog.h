
#include <iostream>

using namespace std;

class Dog
{
private:
    string name;
    int age{};

public:
    Dog(string name = "None", int age = 0)
    {
        this->name = name;
        this->age = age;
    }
    // the copy constructor
    Dog(Dog const &source) : name{source.name}, age{source.age}
    {
        cout << "--> Copy Constructor: " << endl;
    }

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

    int get_human_years() { return this->age * 7; };

    std::string speak() { return "Woof"; };

    void print_sats() { cout << "Name: " << this->name << "; \nAge: " << this->age << endl; };
};
