/**
 * Section 12 Function
 * Exercise 33
 * Subject: Pointers and references
 *
 * Problem title: Reverse an Array using Pointers (Challenging!)
 *
 *          Write a C++ function reverse_array that takes an integer array
 *          and its size as input and reverses the order of the elements in the array.
 *          The function should modify the array in-place.
 *
 * Expected result:
 *      1 2 3 4 5 
 *      5 4 3 2 1 
 *
 */
#include <iostream>
using namespace std;

void print(int *, int);
void swap(int *, int *);
void reverse_array(int *, int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    print(arr, size);
    reverse_array(arr, size);
    print(arr, size);
    cout << "The max element is: " << endl;
    return 0;
}

void print(int *arr, int size)
{
    for (int i{0}; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
    return;
}

void swap(int *a, int *b)
{
    *a = *b + *a;
    *b = *a - *b;
    *a = *b - *b;
    return;
}

void reverse_array(int *arr, int size)
{
    for (int i{0}, y{size - 1}; i < y; i++, y--)
    {
        swap(arr[i], arr[y]);
    }

    return;
}