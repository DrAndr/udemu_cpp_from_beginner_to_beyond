/**
 * Section 15
 * Subject: Polimorphism
 * Lesson 191 [ Abstract_Classes_as_Interfaces ]
 *
 * Expected result:
    The first option should return:
        One operator overloading for all Derived objects
        ==== Static usage ====
        Line
        Circle
        Square
        ~Square destructor;

        ==== Dynamic usage ====
        Line
        Circle
        Square
        ~Square destructor;
    The Second option should return:
        One operator overloading for all Derived objects
        ==== Static usage ====
        Line print method

        Circle print method

        Square print method

        ~Square destructor;

        ==== Dynamic usage ====
        Line print method

        Circle print method

        Square print method

        ~Square destructor;
 */

#include <iostream>
#include <vector>

using namespace std;

///////////////////////
class I_Printable
{
    friend ostream &operator<<(ostream &os, const I_Printable &obj);

public:
    virtual void print(ostream &os) const = 0;
};

/**
 * Second option
*/
ostream &operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}

///////////////////////

class Shape : public I_Printable // Abstract Base Class
{
    // friend ostream &operator<<(ostream &os, const Shape &sh); // uncoment for usage FIRST option

private:
    // Attributes common to all shapes
public:
    virtual string get_type() const = 0;
    virtual void print(ostream &os) const override { os << "Shape print method" << endl; }
    virtual ~Shape(){};
};

/**
 * First option [ without I_Printable deriving ] 
*/
// ostream &operator<<(ostream &os, const Shape &sh)
// {
//     os << sh.get_type();
//     return os;
// }

///////////////////////

class Open_Shape : public Shape // Abstract Derived class
{
public:
    virtual ~Open_Shape(){};
};

class Closed_Shape : public Shape // Abstract Derived class
{
public:
    virtual ~Closed_Shape(){};
};

class Line : public Open_Shape // Concrete Class
{
public:
    virtual string get_type() const override { return "Line"; };
    virtual void print(ostream &os) const override final { os << "Line print method" << endl; }
    virtual ~Line(){};
};

class Circle : public Closed_Shape // Concrete Class
{
public:
    virtual string get_type() const override { return "Circle"; };
    virtual void print(ostream &os) const override final { os << "Circle print method" << endl; }
    virtual ~Circle(){};
};

class Square : public Closed_Shape // Concrete Class
{
public:
    virtual string get_type() const override { return "Square"; };
    virtual void print(ostream &os) const override final { os << "Square print method" << endl; }
    virtual ~Square() { cout << "~Square destructor;" << endl; };
};

int main()
{
    cout << "One operator overloading for all Derived objects" << endl;
    cout << "==== Static usage ====" << endl;
    {
        Line s1;
        Circle s2;
        Square s3;

        cout << s1 << endl;
        cout << s2 << endl;
        cout << s3 << endl;
    }

    cout << "\n==== Dynamic usage ====" << endl;

    {
        Shape *s1 = new Line();
        Shape *s2 = new Circle();
        Shape *s3 = new Square();

        cout << *s1 << endl;
        cout << *s2 << endl;
        cout << *s3 << endl;

        delete s1;
        delete s2;
        delete s3;
    }

    return 0;
}
