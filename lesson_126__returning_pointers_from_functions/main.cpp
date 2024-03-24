/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 126 [ Returning a pointer from a function ]
 */

#include <iostream>

using namespace std;

int *largest_int(int *, int *);

int main()
{
    int a{5};
    int b{10};
    int *result{};

    result = largest_int(&a, &b);
    cout << "result: " << result << endl;   // 0x7ff7bc6604f4
    cout << "*result: " << *result << endl; // 10

    cout << "----------------------" << endl;

    return 0;
}

int *largest_int(int *num_1, int *num_2)
{        // val      val     link    link
    return *num_1 > *num_2 ? num_1 : num_2;
}
