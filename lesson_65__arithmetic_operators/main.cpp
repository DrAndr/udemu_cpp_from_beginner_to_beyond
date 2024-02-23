/**
 * Section 8
 * Lesson 65
 * Subject: Arithmetic operators
 */

#include <iostream>

using namespace std;

int main()
{
    int num_1{10};
    int num_2{2};
    int result{0};

    cout << "========================================" << endl;
    // addition
    result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << result << endl;

    // substraction
    result = num_1 - num_2;
    cout << num_1 << " - " << num_2 << " = " << result << endl;

    // multiplication
    result = num_1 * num_2;
    cout << num_1 << " * " << num_2 << " = " << result << endl;

    // devidion
    result = num_1 / num_2;
    cout << num_1 << " / " << num_2 << " = " << result << endl;

    cout << "Expected 0 insteand of 0.2 since result have the int type" << endl; // 0 insteand of 0.2 since result have the int type
    result = num_2 / num_1;
    cout << num_2 << " / " << num_1 << " = " << result << endl; // 0 insteand of 0.2 since result have the int type

    cout << "/n================> mod <=====================" << endl;
    result = num_1 % num_2;
    cout << num_1 << " % " << num_2 << " is " << result << endl;
    result = 9 % num_2;
    cout << 9 << " % " << num_2 << " is " << result << endl;
    result = 8 % num_2;
    cout << 8 << " % " << num_2 << " is " << result << endl;
    result = 7 % num_2;
    cout << 7 << " % " << num_2 << " is " << result << endl;
    result = 6 % num_2;
    cout << 6 << " % " << num_2 << " is " << result << endl;
    result = 5 % num_2;
    cout << 5 << " % " << num_2 << " is " << result << endl;
    result = 4 % num_2;
    cout << 4 << " % " << num_2 << " is " << result << endl;
    result = 3 % num_2;
    cout << 3 << " % " << num_2 << " is " << result << endl;
    result = 2 % num_2;
    cout << 2 << " % " << num_2 << " is " << result << endl;
    result = 1 % num_2;
    cout << 1 << " % " << num_2 << " is " << result << endl;

    cout << "========== common division ============" << endl;

    cout << "5/10 = " << 5 / 10 << endl;
    cout << "0.5/0.10 = " << 0.5 / 0.10 << endl;

    return 0;
}
