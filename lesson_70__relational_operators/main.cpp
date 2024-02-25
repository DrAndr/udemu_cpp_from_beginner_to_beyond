/**
 * Section 8 - Statements and operators
 * Lesson 70
 * Subject: Relational opertors
 */

#include <iostream>

using namespace std;

int main()
{
    int num_1{}, num_2{};
    cout << "Enter 2 integers separated by a space: ";
    cin >> num_1 >> num_2;

    cout << boolalpha;
    cout << num_1 << " > " << num_2 << " is " << (num_1 > num_2) << endl;
    cout << num_1 << " >= " << num_2 << " is " << (num_1 >= num_2) << endl;
    cout << num_1 << " < " << num_2 << " is " << (num_1 < num_2) << endl;
    cout << num_1 << " <= " << num_2 << " is " << (num_1 <= num_2) << endl;

    cout << "========================================================" << endl;

    const int lower{10};
    const int upper{20};

    cout << "\nEnter an integer that is great than " << lower << " is ";
    cin >> num_1;
    cout << num_1 << " > " << lower << " is " << (num_1 > lower) << endl;

    cout << "\nEnter an integer that is less or equal to " << upper << " is ";
    cin >> num_1;
    cout << num_1 << " <= " << upper << " is " << (num_1 <= upper) << endl;

    return 0;
}
