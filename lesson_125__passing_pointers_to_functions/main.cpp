/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 125 [ Passing pointers to functions ]
 */

#include <iostream>

using namespace std;

void double_data(int *);
void swap(int *, int *);

int main()
{

    int value{10};
    int *value_ptr{nullptr};

    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    value_ptr = &value;
    double_data(value_ptr);
    cout << "Value: " << value << endl;
    cout << endl;

    cout << "\n---------------------------" << endl;

    int x{10}, y{20};
    cout << "\nx:" << x << endl;
    cout << "y:" << y << endl;

    swap(&x, &y);

    cout << "\nRun swap:" << endl;
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;

    return 0;
}

void double_data(int *num)
{
    *num *= 2;
    return;
}

void swap(int *a, int *b)
{
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a;
    return;
}
