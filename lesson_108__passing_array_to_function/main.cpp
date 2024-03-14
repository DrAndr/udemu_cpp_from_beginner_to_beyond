/**
 * Section 11 Function
 * Lesson 108
 * Subject: passing array to function
 *
 * good example that function get link to the origin array
 * instead of copy!
 *
 * Expected result:
 *  --- print_guest_list ---
    1) Larry
    2) Moe
    3) Curly
    -> clear_guest_list
    --- print_guest_list ---
    1)
    2)
    3)
 */

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

void event_guest_list();
string print_guest_list(const string guest_list[], size_t s); //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string guest_list[], size_t s);         //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

int main()
{
    event_guest_list();
    cout << endl;
    return 0;
}

void event_guest_list()
{

    string guest_list[]{"Larry", "Moe", "Curly"};
    size_t guest_list_size{3};

    cout << "--- print_guest_list ---" << endl;
    print_guest_list(guest_list, guest_list_size);
    cout << "-> clear_guest_list" << endl;
    clear_guest_list(guest_list, guest_list_size);
    cout << "--- print_guest_list ---" << endl;
    print_guest_list(guest_list, guest_list_size);
}

string print_guest_list(const string guest_list[], size_t s)
{
    for (size_t i{0}; i < s; ++i)
        cout << i + 1 << ") " << guest_list[i] << endl;

    return typeid(guest_list).name();
}

void clear_guest_list(string guest_list[], size_t s)
{
    for (size_t i{0}; i < s; ++i)
        guest_list[i] = " ";
}
