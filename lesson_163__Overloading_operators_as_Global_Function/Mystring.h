#ifndef _MYSTRING_H_
#define _MYSTRING_H_

using namespace std;

class Mystring
{
    // Global Not Member function declaration
    friend Mystring operator-(const Mystring &lhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);

private:
    char *str;

public:
    Mystring();                       // no-args constructor
    Mystring(const char *str);        // overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&r_val);       // Move constructor

    ~Mystring();

    // Copy assignment
    Mystring &operator=(const Mystring &rhs /* rhs - refers to right hand side */);

    // Move assignment
    Mystring &operator=(Mystring &&rhs);
    // Mystring operator+(const Mystring &rhs) const;
    // Mystring operator-() const;
    // bool operator==(const Mystring &rhs) const;
    // bool operator!=(const Mystring &rhs) const;

    void display();
    void printStrInfo();
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_