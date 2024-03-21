/**
 * Section 12 Function
 * Exercise 30
 * Subject: Pointers and references
 *
 * Problem Title: Swap Values using Pointers
 *      Write a C++ function swap_pointers that takes two integer
 *      pointers as input and swaps the values that they are pointing to.
 *      You can use a temporary variable if you wish but try to do it
 *      without using any temporary variables.
 */
#include <iostream>
using namespace std;

void swapPointers(int *, int *);

int main()
{

    int a{5};
    int b{10};

    int *ptrA = &a;
    int *ptrB = &b;

    swapPointers(ptrA, ptrB);
    cout << endl;
    return 0;
}

void swapPointers(int *ptr1, int *ptr2)
{
    //-- Write your code below this line

    cout << "ptr1 " << ptr1 << endl;
    cout << "ptr2 " << ptr2 << endl;
    cout << "*ptr1 " << *ptr1 << endl;
    cout << "*ptr2 " << *ptr2 << endl;
    // 15.....5......10
    *ptr1 = *ptr1 + *ptr2; // 5 + 10 = 15
    // 5.....15......10
    *ptr2 = *ptr1 - *ptr2; // 15 - 10 = 5
    // 10....15......5
    *ptr1 = *ptr1 - *ptr2; // 15 - 5 = 10

    cout << "\n------------ Afner swapping -----------" << endl;
    cout << "ptr1 " << ptr1 << endl;
    cout << "ptr2 " << ptr2 << endl;
    cout << "*ptr1 " << *ptr1 << endl;
    cout << "*ptr2 " << *ptr2 << endl;
    //-- Write your code above this line
    return;
}
