/**
 * Section 15
 * Subject: Inheritance
 * Lesson 176 [ Copy/Move Constructors and operator= with Deriving Class ]
 *
 * Expected result:
            ===== Base =====
            Base (int) overloaded constructor;
            Base Copy Constructor;
            Base operator=();
            Base destructor;
            Base destructor;

            ===== Derived =====
            Base no-args constructor;
            >Derived no-args constructor;
            Base (int) overloaded constructor;
            >Derived (int) overloaded constructor;
            Base Copy Constructor;
            >Derived Copy constructor;
            >Derived operator=();
            Base operator=();
            >Derived destructor;
            Base destructor;
            >Derived destructor;
            Base destructor;

            >Derived destructor;
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
    Base(const Base &source) : value{source.value} { cout << "Base Copy Constructor;" << endl; };
    ~Base() { cout << "Base destructor;" << endl; }

    Base &operator=(const Base &rhs)
    {
        cout << "Base operator=();" << endl;
        if (this != &rhs)
            value = rhs.value;
        return *this;
    }
    void print() const { cout << value << endl; };
    void print_base() const { cout << value << endl; };
};

class Derived : public Base
{

private:
    int cloned_value;

public:
    Derived() : Base{}, cloned_value{0} { cout << ">Derived no-args constructor;" << endl; }
    Derived(int x) : Base{x}, cloned_value{x * 2} { cout << ">Derived (int) overloaded constructor;" << endl; }
    Derived(Derived &source) : Base(source), cloned_value{source.cloned_value}
    {
        cout << ">Derived Copy constructor;" << endl;
    };
    ~Derived() { cout << ">Derived destructor;" << endl; }

    Derived &operator=(const Derived &rhs)
    {
        if (this != &rhs)
        {
            cout << ">Derived operator=();" << endl;
            Base::operator=(rhs);
            cloned_value = rhs.cloned_value;
        }

        return *this;
    }
    void print() const { cout << cloned_value << endl; };
};

int main()
{
    cout << "\n===== Base =====" << endl;
    {
        Base b{100};
        Base b1{b};
        b = b1;
    }

    cout << "\n===== Derived =====" << endl;
    Derived d;
    {
        Derived d{100};
        Derived d1{d};
        d = d1;
    }

    cout << endl;
    return 0;
}
