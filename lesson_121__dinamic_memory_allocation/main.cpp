/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 121 [ Dinamic memory allocation ]
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int *int_ptr{nullptr};
    int_ptr = new int;        // allocate an integer on the heap
    cout << int_ptr << endl;  // 0x7ff42d7059d0
    cout << *int_ptr << endl; // 0

    *int_ptr = 100;
    cout << int_ptr << endl;  // 0x7ff42d7059d0
    cout << *int_ptr << endl; // 100

    delete int_ptr;           // frees the allocated storage
    cout << int_ptr << endl;  // 0x7ff42d7059d0
    cout << *int_ptr << endl; // 0x0

    // int *array_ptr{nullptr};
    // ... 
    // delete[] array_ptr;

    cout << endl;
    return 0;
}
