/**
 * Section 17
 * Subject: Smart Pointers
 * Lesson 201 [ Weak Pointers ]
 *
 * Expected result:
            A Constructor
            B Constructor

            ==== weak_ptr<> Usage. ====
            A Constructor
            B Constructor
            A Destructor
            B Destructor

            -= END =-
 */

#include <iostream>
#include <vector>

using namespace std;

class B; // Forvard declaration

class A
{
    shared_ptr<B> b_ptr;

public:
    void set_b(shared_ptr<B> &b) { b_ptr = b; }
    A() { cout << "A Constructor" << endl; }
    ~A() { cout << "A Destructor" << endl; }
};

///////////
class B
{
    // wrong way
    shared_ptr<A> a_ptr; // make weak to prevent strong circular reference

    // correct way
    weak_ptr<A> aw_ptr;

public:
    void set_a(shared_ptr<A> &a) { a_ptr = a; }       // wrong way
    void set_weak_a(shared_ptr<A> &a) { aw_ptr = a; } // correct way
    B() { cout << "B Constructor" << endl; }
    ~B() { cout << "B Destructor" << endl; }
};

int main()
{
    {
        shared_ptr<A> a = make_shared<A>();
        shared_ptr<B> b = make_shared<B>();

        a->set_b(b);
        b->set_a(a);

        /**
         *      Explicitly memory leak
         */
        // result :
        //      A Constructor
        //      B Constructor
        // -------------------
        //      ???? There Destructors never been runned
    }
    cout << "\n==== weak_ptr<> Usage. ====" << endl;
    {
        shared_ptr<A> a = make_shared<A>();
        shared_ptr<B> b = make_shared<B>();

        a->set_b(b);
        b->set_weak_a(a);

        /**
         *      Explicitly memory leak
         */
        // result :
        //      ==== weak_ptr<> Usage. ====
        //      A Constructor
        //      B Constructor
        //      A Destructor
        //      B Destructor
    }
    cout << "\n-= END =-" << endl;
    return 0;
}
