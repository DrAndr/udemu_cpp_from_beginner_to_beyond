/**
 * Section 11 Function
 * Lesson 107
 * Subject: Overloading Functions
 *
 * Expected result:
        Print int: 5
        Print string: 'String'
        Print double: 56.7
        Print str1: 'string one', str2: 'string second'
        Print vector: [ Larry, Moe, Charly,  ]
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main()
{
    vector<string> tree_stooges{"Larry", "Moe", "Charly"};
    string str1{"'string one'"};
    string str2{"'string second'"};
    print(5);
    print("'String'");
    print(56.7);
    print(str1, str2);
    print(tree_stooges);

    cout << endl;
    return 0;
}

void print(int num)
{
    cout << "Print int: " << num << endl;
    return;
}

void print(double num)
{
    cout << "Print double: " << num << endl;
    return;
}

void print(string str)
{

    cout << "Print string: " + str << endl;
    return;
}

void print(string str1, string str2)
{

    cout << "Print str1: " + str1 + ", str2: " + str2 << endl;
    return;
}

void print(vector<string> v)
{

    cout << "Print vector: [ ";
    for (auto i : v)
    {
        cout << i + ", ";
    }
    cout << " ]" << endl;

    return;
}