/**
 * Section 8 - Statements and operators
 * Lesson 68
 * Subject: Mixed expressions and conversions
 */

/*
    To calculate avaerage of 3 random numbers
*/
#include <iostream>

using namespace std;

int main()
{
    int num_1{}, num_2{}, num_3{};
    int sum{};
    double avg{0.0};
    const int count{3};

    cout << "Enter 3 integers: ";

    cin >> num_1;
    cin >> num_2;
    cin >> num_3;

    sum = num_1 + num_2 + num_3;
    avg = static_cast<double>(sum) / count;
    // avg = (double)sum / count;  // old style ( dprecated )

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
