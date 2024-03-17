/**
 * Section 11 Function
 * Lesson 109
 * Subject: Pass by reference
 *
 * Expected result:
 *  Larry
    Moe
    Curly
    -
    -
    -
 *
 */

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

void event_guest_list();
string print_guest_list(const string &, const string &, const string &);
void clear_guest_list(string &, string &, string &);

//////////

int main()
{
    event_guest_list();
    return 0;
}

void event_guest_list()
{

    string guest_1{"Larry"};
    string guest_2{"Moe"};
    string guest_3{"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);

    return;
}

string print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3)
{

    cout << guest_1 << endl
         << guest_2 << endl
         << guest_3 << endl;

    string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3)
{

    guest_1 = "-";
    guest_2 = "-";
    guest_3 = "-";

    return;
}
