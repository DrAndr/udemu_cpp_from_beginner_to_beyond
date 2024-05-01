#include <iostream>
#include <vector>
#include "Account_Util.h"
/* Old approach
// template <typename T, typename A>
// void display(const std::vector<T, A> &accounts)
// {
//     std::cout << "\n___Account___" << std::endl;
//     for (const auto &acc : accounts)
//         std::cout << acc << std::endl;
// }

// template <typename T, typename A>
// void deposit(std::vector<T, A> &accounts, double amount)
// {
//     std::cout << "\n___Depositing to Account___" << std::endl;
//     for (auto &acc : accounts)
//     {
//         if (acc.deposit(amount))
//             std::cout << "Deposited " << amount << " to " << acc << std::endl;
//         else
//             std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
//     }
// }
// template <typename T, typename A>
// void withdraw(std::vector<T, A> &accounts, double amount)
// {
//     std::cout << "\n___Withdrawing from Account___" << std::endl;
//     for (auto &acc : accounts)
//     {
//         if (acc.withdraw(amount))
//             std::cout << "Wihdrew " << amount << " from " << acc << std::endl;
//         else
//             std::cout << "Failed Wihdrawal of " << amount << " from " << acc << std::endl;
//     }
// }
*/

void display(const std::vector<std::unique_ptr<Account>> &accounts)
{
    std::cout << "\n___Account___" << std::endl;
    for (const auto &acc : accounts)
        std::cout << *acc << std::endl;
}
void deposit(std::vector<std::unique_ptr<Account>> &accounts, double amount)
{
    std::cout << "\n___Depositing to Account___" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << *acc << std::endl;
    }
}
void withdraw(std::vector<std::unique_ptr<Account>> &accounts, double amount)
{
    std::cout << "\n___Withdrawing from Account___" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc->withdraw(amount))
            std::cout << "Wihdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Wihdrawal of " << amount << " from " << *acc << std::endl;
    }
}

