/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 149 [ Shallow and Deep copying with the Copy Constructor ]
 *
 * Expected result:
                ------ Deep -------
                Copy Constructor [Deep]0x7ff7b03c94c8
                200
                Destructor [Deep]0x7ff7b03c94c8
                Copy Constructor [Deep]0x7ff7b03c94b0
                Destructor [Deep]0x7ff7b03c94b0
                Destructor [Deep]0x7ff7b03c94d0

                ------ Shallow -------
                Copy Constructor [Shallow]0x7ff7b03c94a0
                100
                Destructor [Shallow]0x7ff7b03c94a0
                Copy Constructor [Shallow]0x7ff7b03c9498
                Destructor [Shallow]0x7ff7b03c9498
                main.o(63558,0x11241c600) malloc: *** error for object 0x7fb281f059d0: pointer being freed was not allocated
                main.o(63558,0x11241c600) malloc: *** set a breakpoint in malloc_error_break to debug
 */

#include <iostream>

using namespace std;

class Shallow
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; };
    int get_data() { return *data; }

    // The Constructor implementation
    Shallow(int d)
    {
        data = new int;
        *data = d;
    }

    // Copy Constructor implementation
    Shallow(const Shallow &source) : data{source.data}
    {
        cout << "Copy Constructor [Shallow]" << this << endl;
    }

    // Destructor impementation
    ~Shallow()
    {
        cout << "Destructor [Shallow]" << this << endl;
        delete data;
    }
};

class Deep
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; };
    int get_data() { return *data; }

    // The Constructor implementation
    Deep(int d)
    {
        data = new int;
        *data = d;
    }

    // Copy Constructor implementation
    Deep(const Deep &source) : Deep{*source.data}
    {
        cout << "Copy Constructor [Deep]" << this << endl;
    }

    // Destructor impementation
    ~Deep()
    {
        cout << "Destructor [Deep]" << this << endl;
        delete data;
    }
};

template <typename T>
void display(T obj)
{
    cout << obj.get_data() << endl;
}

int main()
{
    cout << "\n------ Deep -------" << endl;

    {
        Deep obj_1{200};
        display(obj_1);

        Deep obj_2{obj_1}; // OK since we copying value by lynk( copy constructor, line 77 ), when usage "display(obj_1);"
    }
    cout << "\n------ Shallow -------" << endl;
    {
        Shallow obj_1{100};
        display(obj_1);

        /**
         * At this point we catch ERROR:
         * since data value was destroyed after completion "display(obj_1);", but we will try to accesed it by old pointer
         * ----
         * main.o(62543,0x11dfd3600) malloc: *** error for object 0x7fc350f059d0: pointer being freed was not allocated
         * main.o(62543,0x11dfd3600) malloc: *** set a breakpoint in malloc_error_break to debug
         * ----
         */
        Shallow obj_2{obj_1}; // ERROR
    }
    cout << endl;
    return 0;
}
