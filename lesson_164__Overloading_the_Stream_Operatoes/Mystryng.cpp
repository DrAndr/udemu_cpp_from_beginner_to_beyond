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

// Move constructor
Mystring::Mystring(Mystring &&source) : str{source.str} { source.str = nullptr; }

void Mystring::display() { cout << str; }
void Mystring::printStrInfo() { std::cout << str << " : " << this->get_length() << endl; }

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }

Mystring::~Mystring() { delete[] str; }

// Overloading Assignment Operator [ COPY ]
Mystring &Mystring::operator=(const Mystring &rhs /* rhs - refers to right hand side */)
{
    std::cout << "Copy Assignment used" << endl;

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

Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this != &rhs) // if this not similar objects
    {
        delete[] this->str;  // delete the STR that we have
        this->str = rhs.str; // copy pointer in this->str from the TEMP object [rhs.str = Bonjour]
        rhs.str = nullptr;   // linked the TEMP obj to the nulptr
    }

    cout << "Move Assignment used [this->str = " << this->str << "]" << endl;

    return *this; // any where we should return pointer on this obj
}

/**
 * _______lesson_164 part________________
 *
 */

// Overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    // os << rhs.get_str(); // <-- if it not ftiend function
    return os;
};

// Overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *temp = new char[1000];
    in >> temp;

    rhs = Mystring{temp}; // if it coppy or move assignment

    delete[] temp;

    return in;
};
