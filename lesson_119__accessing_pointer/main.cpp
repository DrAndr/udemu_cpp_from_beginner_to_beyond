/**
 * Section 12
 * Lesson 119
 * Subject: Pointers and references
 */

#include <iostream>

using namespace std;

int main()
{
    int *p;

    cout << "Value of 'p' is: " << p << endl;       // 0x1f
    cout << "Address of 'p' is: " << &p << endl;    // 0x7ff7b5a1d510
    cout << "Size of 'p' is: " << sizeof p << endl; // 8
    p = nullptr;
    cout << "Now value of 'p' is: " << p << endl;   // 0x0

    cout << endl;
    return 0;
}
