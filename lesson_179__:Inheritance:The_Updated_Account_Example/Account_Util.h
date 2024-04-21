#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "Account.h"
#include "Savings_Account.h"

// TODO
// template <typename T>
// void display(const std::vector<T> &accounts);
// template <typename T>
// void deposit(const std::vector<T> &accounts, double amount);
// template <typename T>
// void withdraw(const std::vector<T> &accounts, double amount);

// Utility helper functions for the Account class;
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for the Savings_Account class;

void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

#endif //_ACCOUNT_UTIL_H_
