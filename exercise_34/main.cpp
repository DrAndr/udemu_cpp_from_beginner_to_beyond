/**
 * Section 12 Function
 * Exercise 34
 * Subject: Pointers and references
 *
 * Problem title: Reverse a string using Pointers (Challenging!)
 *
 *          Write a C++ function reverse_string that takes a std::string as input
 *          and returns a new std::string with the characters in reverse order.
 *          The function should use pointers to perform the reversal.
 *
 * Expected result:
 *
 */
#include <iostream>
#include <string>

using namespace std;

string reverse_string(const string &);

int main()
{
    string str = "Hello";
    string reversed{};

    cout << "Str value: " << str << endl;
    reversed = reverse_string(str);
    cout << "Reversed str value: " << reversed << endl;
    cout << endl;
    return 0;
}

string reverse_string(const string &str)
{
    string reversed{};
    const char *start = str.c_str();                // Pointer to the first character
    const char *end = str.c_str() + str.size() - 1; // Pointer to the last character

    while (end >= start)
    {
        reversed.push_back(*end); // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed;
}
