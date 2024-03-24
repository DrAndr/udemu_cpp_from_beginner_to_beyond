/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 126 [ Returning a pointer from a function ]
 */

#include <iostream>
#include <array>

using namespace std;

int *largest_int(int *, int *);
int *create_array(size_t, int);
void display(const int *const, size_t);

int main()
{
    int a{5};
    int b{10};
    int *largest_ptr{nullptr};

    largest_ptr = largest_int(&a, &b);
    cout << "largest_ptr: " << largest_ptr << endl;   // 0x7ff7bc6604f4
    cout << "*largest_ptr: " << *largest_ptr << endl; // 10
    
    cout << "----------------------" << endl;
    int *my_array{nullptr};
    size_t size{};
    int int_value{};

    cout << "\n How many integers would you like allocate: ";
    cin >> size;
    cout << "\n What value would you like them initialized to: ";
    cin >> int_value;

    my_array = create_array(size, int_value);

    display(my_array, size);
    delete[] my_array;

    return 0;
}

int *largest_int(int *num_1, int *num_2)
{ // val      val     link    link
    return *num_1 > *num_2 ? num_1 : num_2;
}

int *create_array(size_t size, int init_val = 0)
{
    int *new_storage{nullptr};
    new_storage = new int[size];

    for (size_t i{0}; i < size; i++)
        *(new_storage + i) = init_val;

    return new_storage;
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}
