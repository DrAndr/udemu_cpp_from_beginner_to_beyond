/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 132 [ Challenge ]
 */

#include <iostream>
#include <array>

using namespace std;

void print(int[], size_t);
int *apply_all(int[], size_t, int[], size_t);

int main()
{
    int arr_1[]{1, 2, 3, 4, 5};
    int arr_2[]{10, 20, 30};

    cout << "Array 1: ";
    print(arr_1, 5);

    cout << "Array 2: ";
    print(arr_2, 3);

    int *result = apply_all(arr_1, 5, arr_2, 3);
    cout << "Result: ";
    print(result, 15);

    delete[] result;

    cout << endl;

    return 0;
}

void print(int arr[], size_t size)
{
    cout << "[ ";
    for (size_t i{0}; i < size; i++)
        cout << arr[i] << " ";

    cout << " ]";
    cout << endl;
}

int *apply_all(int arr_1[], size_t size_1, int arr_2[], size_t size_2)
{
    int *result{nullptr}; // init pointer
    result = new int[size_1 * size_2]; // define array length

    for (size_t i{0}, z{0}; i < size_1; i++)
    {
        for (size_t y{0}; y < size_2; y++)
        {
            result[z] = arr_1[i] * arr_2[y]; // put value
            ++z;
        }
    }

    return result; // return pointer hex value 
}
