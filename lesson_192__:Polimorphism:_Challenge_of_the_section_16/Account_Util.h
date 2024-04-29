#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "Account.h"
#include "Savings_Account.h"

template <typename T, typename A>
void display( const std::vector<T, A> &accounts);

template <typename T, typename A>
void deposit( std::vector<T, A> &accounts, double amount);

template <typename T, typename A>
void withdraw( std::vector<T, A> &accounts, double amount);



#endif //_ACCOUNT_UTIL_H_
