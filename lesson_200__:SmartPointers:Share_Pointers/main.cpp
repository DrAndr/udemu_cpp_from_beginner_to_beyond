/**
 * Section 17
 * Subject: Smart Pointers
 * Lesson 200 [ Share_Pointers ]
 *
 * Expected result:

 */

#include <iostream>
#include <vector>

using namespace std;

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

    cout << "\n-= END =-" << endl;
    return 0;
}
