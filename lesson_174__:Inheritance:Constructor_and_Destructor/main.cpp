/**
 * Section 15
 * Subject: Inheritance
 * Lesson 174 [ Constructor and Destructor ]
 * ____Common example with descriptions
 *
 * Expected result:
            Base no-args constructor;
            0
            Base (int) overloaded constructor;
            100
            Base no-args constructor;
            Derived no-args constructor;
            0
            Base no-args constructor;
            Derived (int) overloaded constructor;
            400

            Derived destructor;
            Base destructor;
            Derived destructor;
            Base destructor;
            Base destructor;
            Base destructor;
 */

#include <iostream>

using namespace std;

class Base
{
private:
    int value;

public:
    Base() : value{0} { cout << "Base no-args constructor;" << endl; }
    Base(int x) : value{x} { cout << "Base (int) overloaded constructor;" << endl; }
    ~Base() { cout << "Base destructor;" << endl; }
    void print() const { cout << value << endl; };
};

class Derived : public Base
{
    using Base::Base; // copy Base constructors

private:
    int cloned_value;

public:
    Derived() : cloned_value{0} { cout << "Derived no-args constructor;" << endl; }
    // overloading copyed Base constructors ( overloading only for Derived class )
    Derived(int x) : cloned_value{x * 2} { cout << "Derived (int) overloaded constructor;" << endl; }
    ~Derived() { cout << "Derived destructor;" << endl; }
    void print() const { cout << cloned_value << endl; };
};

int main()
{
    Base b;
    b.print();
    Base b1{100};
    b1.print();
    //////////
    Derived d;
    d.print();
    Derived d1{200};
    d1.print();

    cout << endl;
    return 0;
}
