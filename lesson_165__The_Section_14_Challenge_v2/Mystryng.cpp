#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring(/* no-args */) : str{nullptr}
{
    str = new char[1]; // create empty C-style string
    *str = '\0';       // add ednd line pointer
}

Mystring::Mystring(const char *string) : str{nullptr}
{
    if (string == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(string) + 1];
        std::strcpy(str, string);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}
{
    this->str = new char[std::strlen(source.str) + 1];
    std::strcpy(this->str, source.str);
}

Mystring::Mystring(Mystring &&rhs) : str{rhs.str} { rhs.str = nullptr; } // Move constructor

// Destructor
Mystring::~Mystring() { delete[] str; }

// custom methods
void Mystring::display() { std::cout << str; }
void Mystring::printStrInfo() { std::cout << str << " : " << this->get_length() << std::endl; }
int Mystring::get_length() const { return std::strlen(str); }
const char *Mystring::get_str() const { return str; }

// Operator Overloading definition [ as class members ]
// asignment operator
Mystring &Mystring::operator=(const Mystring &rhs)
{
    if (this == &rhs)
        return *this;

    delete[] this->str;                             // ELSE : remove old str
    this->str = new char[std::strlen(rhs.str) + 1]; // create new,
    std::strcpy(this->str, rhs.str);                // and assigne new value

    return *this;
}
//[ MOVE ]
Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this != &rhs) // compare links
    {
        delete[] str;
        this->str = rhs.str;
        rhs.str = nullptr;
    }
    return *this;
};

// Operator Overloading definition [ as friends functions ]

// comparing operators
bool operator==(const Mystring &lhs, const Mystring &rhs) { return strcmp(lhs.str, rhs.str) == 0; };
bool operator!=(const Mystring &lhs, const Mystring &rhs) { return strcmp(lhs.str, rhs.str) != 0; };
bool operator>(const Mystring &lhs, const Mystring &rhs) { return strcmp(lhs.str, rhs.str) > 0; };
bool operator<(const Mystring &lhs, const Mystring &rhs) { return strcmp(lhs.str, rhs.str) < 0; };

// Unary operators overloading
Mystring operator-(const Mystring &obj)
{
    char *temp = new char[std::strlen(obj.str) + 1];
    std::strcpy(temp, obj.str);
    for (size_t i{0}; i < std::strlen(temp); i++)
        temp[i] = std::tolower(temp[i]);
    Mystring newObj{temp};
    delete[] temp;
    return newObj;
};

Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *temp = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(temp, lhs.str);
    std::strcat(temp, rhs.str);
    Mystring newObj{temp};
    delete[] temp;
    return newObj;
};

Mystring &operator+=(Mystring &lhs, const Mystring &rhs)
{
    lhs = lhs + rhs;
    return lhs;
};

Mystring operator*(const Mystring &lhs, int n)
{
    Mystring temp;
    for (int i = 1; i <= n; i++)
        temp += lhs; // OR temp = *this + temp;
    return temp;
};

Mystring &operator*=(Mystring &lhs, int n)
{
    lhs = lhs * n;
    return lhs;
};

std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
};

std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *temp = new char[1000];
    in >> temp;
    rhs = Mystring{temp};
    delete[] temp;
    return in;
};

Mystring &operator++(Mystring &obj)
{
    for (size_t i = 0; i < std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);

    return obj;
};

Mystring operator++(Mystring &obj, int n)
{
    Mystring temp(obj); // Usage COPY Constructor

    ++obj;
    // OR :
    // for (size_t i = 0; i < std::strlen(obj.str); i++)
    //     obj.str[i] = std::toupper(obj.str[i]);

    return temp;
};
