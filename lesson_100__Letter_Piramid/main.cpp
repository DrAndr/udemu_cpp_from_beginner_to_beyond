/**
 * Section 10 Course content
 * Lesson 100
 * Subject: Working with C++ strings [ Challenge Assigment ]
 *
 * ☞ Letter Pyramid
 * ☞ Example:
 * Enter your car-sett: qwerty
    -----q-----
    ----qwq----
    ---qwewq---
    --qwerewq--
    -qwertrewq-
    qwertytrewq
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string incoming_string{};
    cout << "Enter your charset: ";
    getline(cin, incoming_string);

    size_t incoming_string_length{incoming_string.length()};

    string result{};
    for (size_t i{1}; i <= incoming_string_length; ++i)
    {
        string spaces(incoming_string_length - i, ' ');
        string strat{incoming_string, 0, i};
        string end{incoming_string, 0, i - 1};

        reverse(end.begin(), end.end()); // nested loop less solution

        result += spaces + strat + end + spaces + ((i != incoming_string_length) ? "\n" : "");
    }
    cout << result << endl;

    return 0;
}
