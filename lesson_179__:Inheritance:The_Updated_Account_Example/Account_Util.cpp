#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n___Account___" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n___Depositing to Account___" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n___Withdrawing from Account___" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc.withdraw(amount))
            std::cout << "Wihdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Wihdrawal of " << amount << " from " << acc << std::endl;
    }
}
/////////////

void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "\n___Savings_Account___" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n___Depositing to Savings_Account___" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n___Withdrawing from Savings_Account___" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc.withdraw(amount))
            std::cout << "Wihdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Wihdrawal of " << amount << " from " << acc << std::endl;
    }
}