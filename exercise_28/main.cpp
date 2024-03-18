/**
 * Section 11 Function
 * Exercise 28
 * Subject: Recursive Function
 * 
 * Problem Title: Sum of Digits using Recursion
 *      Problem Description:
 *          Write a C++ program to find the sum of digits of a number using recursion.
 *          You need to implement the function int sum_of_digits(int n) 
 *          that takes an integer n as an argument and returns the sum of its digits.
 */

#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
    if (n <= 0)
        return n;
    return n % 10 + sum_of_digits(n / 10);
}

int main()
{
    int num{1234};

    cout << sum_of_digits(num);

    cout << endl;
    return 0;
}
