/**
 * Section 15
 * Subject: Inheritance
 * Lesson 175 [ Passing Arguments to Base Class Constructor ]
 *
 * Expected result:
            Base no-args constructor;
            Derived no-args constructor;
            d.print();0
            d.print_base();Base (int) overloaded constructor;
            Derived (int) overloaded constructor;
            d1.print();400
            d1.print_base();200

            Derived destructor;
            Base destructor;
            Derived destructor;
            Base destructor;
 */

#include <iostream>

using namespace std;

class Base
{
private:
    int value;

public:
    Base() : value{0}
    {
        cout << "Base no-args constructor;" << endl;
    }

    Base(int x) : value{x}
    {
        cout << "Base (int) overloaded constructor;" << endl;
    }

    ~Base()
    {
        cout << "Base destructor;" << endl;
    }

    void print() const
    {
        cout << value << endl;
    };

    void print_base() const
    {
        cout << value << endl;
    };
};

class Derived : public Base
{

private:
    int cloned_value;

public:
    Derived() : Base{}, cloned_value{0}
    {
        cout << "Derived no-args constructor;" << endl;
    }
    //////
    Derived(int x) : Base{x}, cloned_value{x * 2}
    {
        cout << "Derived (int) overloaded constructor;" << endl;
    }
    //////
    ~Derived()
    {
        cout << "Derived destructor;" << endl;
    }
    void print() const
    {
        cout << cloned_value << endl;
    };
};

int main()
{

    Derived d;
    cout << "d.print();";
    d.print();
    cout << "d.print_base();";

    Derived d1{200};
    cout << "d1.print();";
    d1.print();
    cout << "d1.print_base();";
    d1.print_base();

    cout << endl;
    return 0;
}
