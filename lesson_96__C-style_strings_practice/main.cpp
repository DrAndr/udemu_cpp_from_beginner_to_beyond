/**
 * Section 10 Course content
 * Lesson 96
 * Subject: C-style string praktice
 */

#include <iostream>
#include <cstring> // for including C-style string functions
#include <cctype>  // for including character-based functions

using namespace std;

int main()
{
    /*
        isalpha('A'); // Return true if passed letter
        isalnum('1'); // Return true if passed letter or number
        isdigit('1'); // Return true if passed number
        islower('a'); // Return true if passed a lowercase letter
        isprint('A'); // Return true if passed printable character
        ispunct(','); // Return true if passed punctuation character
        isupper('A'); // Return true if passed an uppercase letter
        isspace(' '); // Return true if passed whitespace

        tolower('A'); // convert letter to lowercase
        toupper('a'); // convert letter to uppercase

        char name[80];
        // name = "Frenky" // Error
        strcpy(name, "Frenky"); // in this way we can put name to the variable, but not longer then 7-characters...
        strcat(name, " !!!"); // concatinate

        cout << strlen(name); // 10

        strcmp(name, "Anoher"); // > 0
    */
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // char test[20];
    // cout << test << endl; // Will likely display garbage! ( %�� )

    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << endl;
    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "\n-------------------------------------" << endl;

    cout << endl;

    return 0;
}
