/**
 * Section 18
 * Subject: Excaptions Handling
 * Lesson 211 [ Class Level Exceptions ]
 *
Expected result:
            =========Creating account with negative balance
            Initial balance too low

            =========Negative amount
            Deposit cant by negative

            =========Еoo large withdraw
            Not enough funds

            -= END =-
 */

#include <iostream>

using namespace std;

class AccountException
{
private:
    int error_code;

public:
    AccountException(int error_code) : error_code{error_code} {};
    ~AccountException() = default;
    string message()
    {
        switch (error_code)
        {
        case 1:
            return string{"Initial balance too low"};
        case 2:
            return string{"Not enough funds"};
        case 3:
            return string{"Deposit cant by negative"};

        default:
            return string{"Unexpected error"};
        }
    }
};

class Account
{
private:
    double balance;
    std::string name;

public:
    Account(string name = "User", double init_balance = 0.0) : name{name}
    {
        if (init_balance < 0)
            throw AccountException(1);

        this->balance = init_balance;
    }
    ~Account() = default;
    void deposit(double ammount)
    {
        if (ammount < 0)
            throw AccountException(3);

        balance += ammount;
        return;
    };

    void withdraw(double ammount)
    {
        if (ammount > balance)
            throw AccountException(2);

        balance -= ammount;
        return;
    }

    void info()
    {
        cout << "Name: " << this->name << endl;
        cout << "Balance: " << this->balance << endl;
    }
};

int main()
{
    cout << "\n=========Creating account with negative balance" << endl;
    {
        try
        {
            Account moe{"Moe", -5.0};
        }
        catch (AccountException &e)
        {
            cout << e.message() << endl;
        }
    }

    cout << "\n=========Negative amount" << endl;
    {
        try
        {
            Account moe{"Moe", 100};
            moe.deposit(-2000.0);
        }
        catch (AccountException &e)
        {
            cout << e.message() << endl;
        }
    }

    cout << "\n=========Еoo large withdraw" << endl;
    {
        try
        {
            Account acc{};
            acc.withdraw(1000);
        }
        catch (AccountException &e)
        {
            cout << e.message() << endl;
        }
    }

    cout << "\n-= END =-" << endl;
    return 0;
}
