#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring(/* no-args */) : str{nullptr}
{
    str = new char[1]; // create empty C-style string
    *str = '\0';       // add ednd line pointer
}

void Mystring::display() { std::cout << str; }
void Mystring::printStrInfo() { std::cout << str << " : " << this->get_length() << std::endl; }

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }

Mystring::~Mystring() { delete[] str; }
