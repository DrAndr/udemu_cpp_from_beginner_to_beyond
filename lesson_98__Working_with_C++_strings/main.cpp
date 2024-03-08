/**
 * Section 10 Course content
 * Lesson 98
 * Subject: Working with C++ strings
 *
 * ☞ All C++ strings this is objects of the string class
 */

#include <iostream>
// #include <cstring>
#include <string>

using namespace std;

int main()
{

    string s0{};         // Empty
    string s1{"Apple"};  // Apple
    string s2{"Banana"}; // Banana
    string s3{"Kivi"};   // Kivi
    string s4{"apple"};  // apple
    string s5{s1};       // Apple
    string s6{s1, 0, 3}; // App
    string s7(10, 'X');  // XXXXXXXXXX

    cout << "s0: " << s0 << ";" << endl;                   // s0: ;
    cout << "s0.length(): " << s0.length() << ";" << endl; // s0.length(): 0;

    cout << "\n~~~~~~~~~~~~~ Check initialization ~~~~~~~~~~~~~~" << endl;

    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;

    cout << "\n~~~~~~~~~~~~~ Comparission ~~~~~~~~~~~~~~" << endl;

    cout << boolalpha;
    cout << s1 << " == " << s5 << " : " << (s1 == s5) << endl; // true
    cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl; // false
    cout << s1 << " != " << s2 << " : " << (s1 != s2) << endl; // true
    cout << s1 << " < " << s2 << " : " << (s1 < s2) << endl;   // true
    cout << s2 << " > " << s1 << " : " << (s2 > s1) << endl;   // true
    cout << s4 << " < " << s5 << " : " << (s4 < s5) << endl;   // false
    cout << s1 << " == Apple : " << (s1 == "Apple") << endl;   // true

    cout << "\n~~~~~~~~~~~~~ Concationation ~~~~~~~~~~~~~~" << endl;

    s0 = s1 + " and " + s2 + "juice.";
    cout << s0 << endl; // Apple and Banana juce.

    cout << "\n~~~~~~~~~~~~~ Looping ~~~~~~~~~~~~~~" << endl;

    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i); // Apple

    cout << endl;
    //  OR
    for (char c : s1)
        cout << c; // Apple

    cout << endl;

    cout << "\n~~~~~~~~~~~~~ Substring ~~~~~~~~~~~~~~" << endl;

    s1 = "This is a test";

    cout << s1.substr(0, 4);  // This
    cout << s1.substr(5, 2);  // is
    cout << s1.substr(10, 4); // test

    cout << "\n~~~~~~~~~~~~~ Erace ~~~~~~~~~~~~~~" << endl;

    s1.erase(0, 5); // the "This " has been erassed

    cout << s1 << endl; // is a test

    cout << "\n~~~~~~~~~~~~~ getline() ~~~~~~~~~~~~~~" << endl;

    string full_name{};

    cout << "Enter your full name";

    getline(cin, full_name);

    cout << "\nYour full name is:" << full_name << endl;

    cout << "\n~~~~~~~~~~~~~ find() ~~~~~~~~~~~~~~" << endl;

    s1 = "The sicret word is Boo";
    string word{};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);

    if (position != string::npos)
        cout << "Found " << word << " on position: " << position << endl;
    else
        cout << "Sorry" << word << " not found." << endl;

    cout << endl;

    return 0;
}
