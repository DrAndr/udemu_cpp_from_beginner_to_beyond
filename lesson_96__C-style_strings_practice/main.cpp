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
    /*
        // char test[20];
        // cout << test << endl; // Will likely display garbage! ( %�� )
        cout << "\n------------------ Section I -------------------" << endl;

        cout << "Please enter your first name: ";
        cin >> first_name;

        cout << "Please enter your last name: ";
        cin >> last_name;

        cout << "\n------------------ Section II -------------------" << endl;

        cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
        cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

        strcpy(full_name, first_name);
        strcat(full_name, " ");
        strcat(full_name, last_name);

        cout << "So, your full name is " << full_name << endl;
    */
    cout << "\n------------------ Section III -------------------" << endl;

    char full_name2[50]{};
    cout << "Enter your full name: ";
    cin.getline(full_name2, 50); // <-------- alloved us get whole string with spaces
    cout << "You tip: " << full_name2 << endl;

    cout << "\n------------------ Section IV -------------------" << endl;
    cout << "the string comparison" << endl
         << endl;

    strcpy(temp, full_name2);

    if (strcmp(temp, full_name2) == 0)
    {
        cout << temp << " and " << full_name2 << " are the same" << endl;
    }
    else
    {
        cout << temp << " and " << full_name2 << " are different" << endl;
    }
    cout << "\n------------------ Section V -------------------" << endl;
    cout << "Update the full name to upprcase" << endl;

    for (size_t i{0}; i < strlen(full_name2); ++i)
    {
        if (isalpha(full_name2[i]))
        {
            full_name2[i] = toupper(full_name2[i]);
        }
    }

    cout << "And now your full name looks like: " << full_name2 << endl;

    cout << "\n------------------ Section VI -------------------" << endl;
    cout << "Compare temp and upprcase full_name, one more time: " << endl;

    if (strcmp(temp, full_name2) == 0)
    {
        cout << temp << " and " << full_name2 << " are the same" << endl;
    }
    else
    {
        cout << temp << " and " << full_name2 << " are different" << endl;
    }

    cout << "Result of comparing " << temp << " and " << full_name2 << " is: " << strcmp(temp, full_name2) << endl; // 1 or 32
    cout << "Result of comparing " << full_name2 << " and " << temp << " is: " << strcmp(full_name2, temp) << endl; // -1 and -32

    cout << endl;

    return 0;
}
