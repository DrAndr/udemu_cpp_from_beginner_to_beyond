#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring(/* no-args */) : str{nullptr}
{
    str = new char[1]; // create empty C-style string
    *str = '\0';       // add ednd line pointer
}

// Overloaded constructor
Mystring::Mystring(const char *s) : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1]; // create empty C-style string
        *str = '\0';       // add ednd line pointer
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

void Mystring::display() { cout << str << " : " << this->get_length() << endl; }

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }

Mystring::~Mystring() { delete[] str; }

// region [ Overloading Assignment Operator ]
Mystring &Mystring::operator=(const Mystring &rhs /* rhs - refers to right hand side */)
{
    cout << "Overloading Assignment Operator..." << endl;

    if (this == &rhs)
        return *this;

    // ELSE : remove old str,
    delete[] this->str;
    // create new,
    this->str = new char[strlen(rhs.str) + 1];
    // and assigne new value
    strcpy(this->str, rhs.str);

    return *this;
}
// endregion