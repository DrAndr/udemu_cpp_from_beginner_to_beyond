/**
 * Section 12 Function
 * Exercise 32
 * Subject: Pointers and references
 *
 * Problem title: Find the Maximum Element in an Array using Pointers
 *
 *          Write a C++ function find_max_element that takes an integer
 *          array and its size as input and returns the maximum element
 *          in the array using pointers.
 *
 * Expected result:
 *
 */
#include <iostream>
using namespace std;

int find_max_element(int *, int);

int main()
{
    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = find_max_element(arr, sizeof(arr) / sizeof(int));
    cout << "The max element is: " << maxElement << endl;
    return 0;
}

int find_max_element(int *arr, int size)
{
    int maxElement{arr[0]};
    for (size_t i{0}; i < size; i++)
        maxElement = arr[i] > maxElement ? arr[i] : maxElement;

    return maxElement;
}