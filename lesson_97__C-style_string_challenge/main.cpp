/**
 * Section 10 Course content
 * Lesson 97
 * Subject: C-style string challenge
 */

#include <iostream>
#include <cstring> // for including C-style string functions
// #include <cctype>  // for including character-based functions

using namespace std;

int main()
{

    char first_name[]{"Bjarne"};
    char last_name[]{"Stroustrup"};
    char whole_name[50]{};

    strcpy(whole_name, first_name);
    strcat(whole_name, " ");
    strcat(whole_name, last_name);

    size_t first_name_length{strlen(first_name)};
    size_t last_name_length{strlen(last_name)};
    size_t whole_name_length{strlen(whole_name)};

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << "The length of the first name, "
         << first_name << ", is " << first_name_length
         << " letters long and the length of the last name, "
         << last_name << ", is " << last_name_length 
         << " letters long. This means that the length of the whole name must be "
         << whole_name_length << " letters long.";
         
    cout << endl;

    return 0;
}
