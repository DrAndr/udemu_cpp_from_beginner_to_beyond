#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
private:
    // attributes
    std::string name{"Costumer"};
    double balance{};

public:
    // Declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // This methods will be defined outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool withdraw(double);
    bool deposit(double);
};

#endif
