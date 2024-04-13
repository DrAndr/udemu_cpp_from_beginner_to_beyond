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
Mystring::Mystring(Mystring &&source) : str{source.str} {source.str = nullptr;}

void Mystring::display() { cout << str; }
void Mystring::printStrInfo() { cout << str << " : " << this->get_length() << endl; }

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }

Mystring::~Mystring(){delete[] str;}

// Overloading Assignment Operator [ COPY ]
Mystring &Mystring::operator=(const Mystring &rhs /* rhs - refers to right hand side */)
{
    cout << "Copy Assignment used" << endl;

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
 * _______lesson_163 part________________
 *  Global Not Member function definition
 * 
*/
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *newStr = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(newStr, lhs.str); // add left val
    strcat(newStr, rhs.str); // add right value

    Mystring newObj{newStr};
    delete[] newStr;
    return newObj;
};

Mystring operator-(const Mystring &lhs)
{
    char *temp = new char[strlen(lhs.str) + 1];
    strcpy(temp, lhs.str);
    for (size_t i{0}; i < strlen(temp); i++)
        temp[i] = tolower(temp[i]);

    Mystring newObj{temp};
    delete[] temp; // deallocate memory
    return newObj;
};

bool operator==(const Mystring &lhs, const Mystring &rhs) { return strcmp(rhs.str, lhs.str) == 0; };

bool operator!=(const Mystring &lhs, const Mystring &rhs) { return strcmp(rhs.str, lhs.str) != 0; };
