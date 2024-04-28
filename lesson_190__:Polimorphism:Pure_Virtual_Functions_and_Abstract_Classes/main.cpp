/**
 * Section 15
 * Subject: Polimorphism
 * Lesson 190 [ Pure_Virtual_Functions_and_Abstract_Classes ]
 *          virtual void function() = 0; // pure virtual function
 * 
 * Expected result:
            --- Line line_1; [Static usage] ---
            Rotate Line;
            Draw Line;

            --- Shape *line_2 = new Line(); [Dynamic usage] ---
            Rotate Line;
            Draw Line;

            --- .....Circle..... ---

            --- Circle circle_1; [Static usage] ---
            Rotate Line;
            Draw Line;

            --- Shape *circle_2 = new Circle();[Dynamic usage] ---
            Rotate Circle;
            Draw Circle;
            -----Vector usage-----
            Rotate Square;
            Draw Square;
            ~Square destructor;
            ----------
            Rotate Line;
            Draw Line;
            ----------
            Rotate Circle;
            Draw Circle;
            ----------
            -= END =-
 */

#include <iostream>
#include <vector>

using namespace std;

class Shape // Abstract Base Class
{
private:
    // Attributes common to all shapes
public:
    virtual void draw() = 0;   // Pure virtual function
    virtual void rotate() = 0; // Pure virtual function
    virtual ~Shape(){};
};

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
    virtual void draw() override
    {
        cout << "Draw Line;" << endl;
        return;
    };
    virtual void rotate() override
    {
        cout << "Rotate Line;" << endl;
        return;
    };
    virtual ~Line(){};
};

class Circle : public Closed_Shape // Concrete Class
{
public:
    virtual void draw() override
    {
        cout << "Draw Circle;" << endl;
        return;
    };
    virtual void rotate() override
    {
        cout << "Rotate Circle;" << endl;
        return;
    };
    virtual ~Circle(){};
};

class Square : public Closed_Shape // Concrete Class
{
public:
    virtual void draw() override
    {
        cout << "Draw Square;" << endl;
        return;
    };
    virtual void rotate() override
    {
        cout << "Rotate Square;" << endl;
        return;
    };
    virtual ~Square() { cout << "~Square destructor;" << endl; };
};

int main()
{
    /**  We can't create object from an Abstrct classes */
    // Shape s;                     // Throw compiler error
    // Shape os = new Open_Shape(); // Throw compiler error

    cout << "\n--- Line line_1; [Static usage] ---" << endl;
    Line line_1;
    line_1.rotate();
    line_1.draw();

    cout << "\n--- Shape *line_2 = new Line(); [Dynamic usage] ---" << endl;
    Shape *line_2 = new Line();
    line_2->rotate();
    line_2->draw();

    cout << "\n--- .....Circle..... ---" << endl;

    cout << "\n--- Circle circle_1; [Static usage] ---" << endl;
    Line circle_1;
    circle_1.rotate();
    circle_1.draw();

    cout << "\n--- Shape *circle_2 = new Circle();[Dynamic usage] ---" << endl;
    Shape *circle_2 = new Circle();
    circle_2->rotate();
    circle_2->draw();

    cout << "-----Vector usage-----" << endl;
    Shape *s1 = new Square();
    Shape *s2 = new Line();
    Shape *s3 = new Circle();
    vector<Shape *> shapes{s1, s2, s3};
    for (Shape *s : shapes)
    {
        s->rotate();
        s->draw();
        delete s;
        cout << "----------" << endl;
    }

    cout << "-= END =-" << endl;

    delete line_2;
    delete circle_2;
    return 0;
}
