#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{

private:
    char *str;

public:
    Mystring();           // no-args constructor
    Mystring(/* TODO */); // overloaded constructor
    Mystring(/* TODO */); // Copy constructor
    Mystring(/* TODO */); // Move constructor

    ~Mystring();

    void display();
    void printStrInfo();
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_