/**
 * Section 10 Course content
 * Lesson 100
 * Subject: Working with C++ strings [ Challenge ]
 *
 * ☞ Substitution Cipher
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string incoming_message{};
    string encripted_message{};
    string decripted_message{};

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFG_HIJKLMNOPQRSTUVWXYZ "};
    string key{"WKLyzapMNZABCPcdeQRDHIJ OlmnoEFGxqrsSTUVtuvwj_kXYbfghi"};

    cout << "Enter your message: ";
    getline(cin, incoming_message);
    size_t char_index{};

    // encripting
    for (size_t i{0}; i < incoming_message.length(); ++i)
    {
        char_index = alphabet.find(incoming_message.at(i));
        if (char_index != string::npos)
            encripted_message += key.at(char_index);
        else
            encripted_message += incoming_message.at(i);
    }
    cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "\n☞ encropted message: " << encripted_message << endl;

    // decripting
    for (size_t i{0}; i < encripted_message.length(); ++i)
    {
        size_t char_index = key.find(encripted_message.at(i));
        if (char_index != string::npos)
            decripted_message += alphabet.at(char_index);
        else
            decripted_message += encripted_message.at(i);
    }
    cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "\n☞ decropted message: " << decripted_message << endl;

    cout << endl;

    return 0;
}
