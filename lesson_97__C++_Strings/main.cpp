/**
 * Section 10 Course content
 * Lesson 97.1
 * Subject: C++ strings
 *
 * ☞ C++ strings are dynamic and can grow and shrink as nedded at runtime !!!
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string s1;             // Empty
    string s2{"Frank"};    // Frank
    string s3{s2};         // Frank
    string s4{"Frank", 3}; // Fra
    string s5{s3, 1, 2};   // ra    // s5{s3, start-index, length}
    string s6(3, 'X');     // XXX

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    cout << "s6: " << s6 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    string part1{"C++"};
    string part2{"is a powerful"};
    string sentence{};

    // sentence = "C++ " + "is a powerful language!";   // Illegal
    sentence = part1 + " " + part2 + " language!"; // C++ is a powerful language!
    cout << sentence << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    string str1{"Frank"}; // Frank

    cout << "str1[0] " << str1[0] << endl;      // F
    cout << "str1.at(0)" << str1.at(0) << endl; // F

    str1[0] = 'f'; // frank
    cout << "str1[0] = 'f'; " << str1 << endl;
    str1.at(0) = 'p'; // prank
    cout << "str1.at(0) = 'p'; " << str1 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    str1 = "Frank";
    cout << "for (char c: str1){" << endl;
    cout << "    cout << c << endl;" << endl;
    cout << "}" << endl;
    cout << "Result: " << endl;
    for (char c : str1)
    {
        cout << c << endl;
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "for (char c: str1){" << endl;
    cout << "    cout << c << endl;" << endl;
    cout << "}" << endl;
    cout << "Result: " << endl;
    for (int c : str1)
    {
        cout << c << endl;
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;

    return 0;
}
