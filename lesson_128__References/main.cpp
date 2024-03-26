/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 128 [ What is References ]
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num{100};
    int &ref{num};

    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;

    cout << "\n-------- num=200; --------" << endl;
    num = 200;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;

    cout << "\n-------- ref=300; --------" << endl;
    ref = 300;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&ref: " << &ref << endl;

    cout << "\n----------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};

    cout << "1) Output: ";
    for (auto str : stooges)
        cout << str << " "; // Larry Moe Curly
    cout << endl;

    cout << "2) modify to Funny: ";
    for (auto str : stooges)
        str = "Funny"; // not change globally
    cout << endl;

    cout << "3) modify to Funny: ";
    for (auto &str : stooges)
        str = "Funny";
    cout << endl;

    cout << "4) Output:  ";
    for (auto const &str : stooges) // use the const reference for safe memory!
        cout << str << " "; // Funny Funny Funny
    cout << endl;

    cout << endl;
    return 0;
}
