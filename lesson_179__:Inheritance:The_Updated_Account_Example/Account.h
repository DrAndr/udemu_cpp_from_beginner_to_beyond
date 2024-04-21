#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &source);

private:
    static constexpr const char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;

protected:
    double balance;
    std::string name;

public:
    // Account(/* args */) ;
    Account(std::string name = default_name, double balance = default_balance);
    // Account(std::string name = "Unnamed Account", double balance = 0.0);
    ~Account();
    bool deposit(double ammount);
    bool withdraw(double ammount);
    double get_balance() const;
};

#endif // _ACCOUNT_H_