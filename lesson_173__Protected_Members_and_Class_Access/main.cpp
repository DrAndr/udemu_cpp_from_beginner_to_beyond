/**
 * Section 15
 * Subject: Inheritance
 * Lesson 173 [ Protected Members And Class Access ]
 * ____Common example with descriptions
 *
 * Expected result:
            ============= Base member acces from Base object =================
            100, 0, 0;

            ============= Base member acces from Derived object ==============
            100, 200, 0;

            -= END =-
 */

#include <iostream>

using namespace std;

class Base
{
public:
    int a{0};
    void display() const { cout << a << ", " << b << ", " << c << ";" << endl; }

protected:
    int b{0};

private:
    int c{0};
};

class Derived : public Base
{
    // Note friends of Derived have acces to only whatDerived has access to !

    // a will be accessed as public
    // b will be accessed as protected

    // c will be not accessible in the derived class
    // [The "c" is derived!! But accesed only via parrent constructor for set and via getter/setter]
public:
    Derived()
    {
        a = 100; // OK
        b = 200; // OK
        // c = 300;    // Compiller ERROR, can be accesed only via get/set
    };
};

int main()
{
    cout << "\n============= Base member acces from Base object =================" << endl;
    Base base;
    base.a = 100; // OK
    // base.b = 100; // Compiler ERROR
    // base.c = 100; // Compiler ERROR
    base.display();

    cout << "\n============= Base member acces from Derived object ==============" << endl;
    Derived derived;
    derived.a = 100; // OK
    // derived.b = 100; // Compiler ERROR
    // derived.c = 100; // Compiler ERROR

    derived.display();

    cout << "\n-= END =-" << endl;
    return 0;
}
