/**
 * Section 11 Function
 * Lesson 113
 * Subject: Recursive Function
 */

#include <iostream>
using namespace std;

/**
 * Return factorial
 */
unsigned long long fibonacci(unsigned long long num)
{
    if (num <= 1)
        return num; // base casse
    return fibonacci(num - 1) + fibonacci(num - 2); // recursion;
}

int main()
{
    int num{};

    cout << "Enter number from 1 to 30: ";
    cin >> num;
    if (num > 0 && num <= 30)
        cout << "\nThe value of " << num << " is: " << fibonacci(num); // if pass 30, result will be 832040
    else
        cout << "\nInwalid number.";

    cout << endl;
    return 0;
}
