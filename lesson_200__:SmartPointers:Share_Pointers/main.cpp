/**
 * Section 17
 * Subject: Smart Pointers
 * Lesson 200 [ Share_Pointers ]
 *
 * Expected result:
            use_count: 1
            use_count: 2
            use_count: 2
            use_count: 3
            p1: 0x7f94caf05a98
            p2: 0x7f94caf05a98
            p3: 0x7f94caf05a98

            ==========================
            Use count: 1
            Use count: 2
            Use count: 3
            Use count: 4
            Use count: 1

            -= END =-
 */

#include <iostream>
#include <vector>

using namespace std;

void func(shared_ptr<string> p) { cout << "Use count: " << p.use_count() << endl; }

int main()
{
    // shared_ptr<int> p1 {new int{100}}
    shared_ptr<int> p1 = make_shared<int>(100);      // use_count: 1
    cout << "use_count: " << p1.use_count() << endl; // use_count: 1
    shared_ptr<int> p2{p1};
    cout << "use_count: " << p1.use_count() << endl; // use_count: 2
    shared_ptr<int> p3;
    cout << "use_count: " << p1.use_count() << endl; // use_count: 2

    p3 = p1;

    cout << "use_count: " << p1.use_count() << endl; // use_count: 3

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;

    cout << "\n==========================" << endl;

    shared_ptr<string> ptr{new string{"test"}};
    cout << "Use count: " << ptr.use_count() << endl; // Use count: 1
    func(ptr);                                        // Use count: 2

    {
        shared_ptr<string> ptr1{ptr};
        func(ptr); // Use count: 3
        {
            shared_ptr<string> ptr2{ptr};
            func(ptr); // Use count: 4
        }
    }
    cout << "Use count: " << ptr.use_count() << endl; // Use count: 1
    cout << "\n-= END =-" << endl;
    return 0;
}
