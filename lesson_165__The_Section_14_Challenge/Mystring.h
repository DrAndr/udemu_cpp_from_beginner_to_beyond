#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    // stream operators overloading
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

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

    // Operator Overloading declaration [ as class members ]
    // comparing operators [ bool Type::operator==( const Type &rhs ) const; ]
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;

    // asignment operators
    // COPY [ Type &Type::operator=(const Type &rhs) ]
    Mystring &operator=(const Mystring &rhs);
    // MOVE [ Type &Type::operator=( Type &&rhs ); ]
    Mystring &operator=(Mystring &&rhs);

    // Unary operators
    Mystring operator-() const;                    // to lowercase
    Mystring operator+(const Mystring &rhs) const; // concatenation
    Mystring &operator+=(const Mystring &rhs);
    Mystring operator*(int n) const;
    Mystring &operator*=(int n);

    Mystring &operator++();
    Mystring operator++(int n);
};

#endif // _MYSTRING_H_