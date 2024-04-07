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

    void display();
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_