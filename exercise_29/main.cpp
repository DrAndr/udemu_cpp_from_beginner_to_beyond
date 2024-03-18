/**
 * Section 11 Function
 * Exercise 29
 * Subject: Recursive Function
 *
 * Problem Title: Save a Penny
 *      In this exercise you will create a program that calculates
 *      the total_amount of money that will be accumulated
 *      if you start with a penny and double it everyday for n number of days.
 * 
 * Expected result :
 *      If I start with a penny and doubled it every day for 25 days, I will have $167772.16
        function_activation_count: 25
 */
#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{0};

double a_penny_doubled_everyday(int d, double p);

void amount_accumulated()
{
    double total_amount{};
    double init_amount{0.01};
    int days{25};
    
    total_amount = a_penny_doubled_everyday(days, init_amount);
    cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int d, double p)
{
    function_activation_count++;
    if (d == 1)
        return p;
    return a_penny_doubled_everyday(d - 1, p * 2);
}

int main()
{
    amount_accumulated();
    cout << "\nfunction_activation_count: " << function_activation_count << endl;
    return 0;
}