/**
 * Section 12 Function
 * Exercise 31
 * Subject: Pointers and references
 *
 * Problem :
 *      Pointers are a fundamental aspect of C++.
 *      They allow for flexible and efficient programming by
 *      giving direct access to memory. You are tasked with
 *      writing a function that uses a pointer to multiply an integer value.
 *
 * Expected result:
 *      num is: 5
 *      The num after multiply is: 50
 */
#include <iostream>
using namespace std;

void multiply_with_pointer(int *, int);

int main()
{
    int num{5};
    int multiplier{10};

    cout << "num is: " << num << endl;
    multiply_with_pointer(&num, multiplier);
    cout << "The num after multiply is: " << num << endl;
    return 0;
}

void multiply_with_pointer(int *ptr, int multiplier)
{
    *ptr *= multiplier;
}