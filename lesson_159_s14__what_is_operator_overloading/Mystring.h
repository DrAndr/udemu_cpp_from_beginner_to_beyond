#ifndef _MYSTRING_H_
#define _MYSTRING_H_

using namespace std;

class Mystring
{
private:
    char *str;

public:
    Mystring();                       // no-args constructor
    Mystring(const char *str);        // overloaded constructor
    Mystring(const Mystring &source); // Copy constructor

    ~Mystring();

    Mystring &operator=(const Mystring &rhs /* rhs - refers to right hand side */); // Copy assignment

    void display();
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_