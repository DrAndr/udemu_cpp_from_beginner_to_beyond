#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    // stream operators overloading
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    // comparing operators [ bool Type::operator==( const Type &lhs, const Type &rhs ) const; ]
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);

    // Unary operators
    friend Mystring operator-(Mystring obj);                             // to lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // concatenation
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int);
    friend Mystring &operator*=(Mystring &lhs, int);

    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int n);

private:
    char *str;

public:
    Mystring();                       // no-args constructor
    Mystring(const char *string);     // overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&rhs);         // Move constructor

    ~Mystring(); // Destructor

    // Custom methods
    void display();
    void printStrInfo();
    int get_length() const;
    const char *get_str() const;

    // asignment operators
    // COPY [ Type &Type::operator=(const Type &rhs) ]
    Mystring &operator=(const Mystring &rhs);
    // MOVE [ Type &Type::operator=( Type &&rhs ); ]
    Mystring &operator=(Mystring &&rhs);
};

#endif // _MYSTRING_H_