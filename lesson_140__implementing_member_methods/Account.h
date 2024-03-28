#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    // attributes
    string name{"Costumer"};
    double balance{};

public:
    // Declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // This methods will be defined outside the class declaration
    void set_name(string n);
    string get_name();

    bool withdraw(double);
    bool deposit(double);
};
