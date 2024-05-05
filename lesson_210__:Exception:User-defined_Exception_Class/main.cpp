/**
 * Section 18
 * Subject: Excaptions Handling
 * Lesson 210 [ Creating User-defined Exception Class ]
 *
Expected result 1:
        Enter 'Sum' value: 10
        Enter 'Total' value: 3
        sum / total = avg | 10 / 3 = 3.33333
        Part after try/catch()

        -= END =-

Expected result 2:
        Enter 'Sum' value: 100
        Enter 'Total' value: -25
        ERROR: Sorry, a negative don't allowed!
        Part after try/catch()

-= END =-
Expected result 3:
        Enter 'Sum' value: 45
        Enter 'Total' value: 0
        ERROR: Can't Devide by zero!
        Part after try/catch()

-= END =-
 */

#include <iostream>

using namespace std;

class DevideByZeroException
{
public:
    string message()
    {
        return string{"Can't Devide by zero!"};
    };
};
class NegativeValueException
{
public:
    string message()
    {
        return string{"Sorry, a negative don't allowed!"};
    };
};

double get_avg(int sum, int total)
{
    if (total == 0)
        throw DevideByZeroException();
    else if (total < 0)
    {
        throw NegativeValueException();
    }

    return static_cast<double>(sum) / total;
}

int main()
{

    double avg{};
    int total{};
    int sum{};

    cout << "Enter 'Sum' value: ";
    cin >> sum;
    cout << "Enter 'Total' value: ";
    cin >> total;

    try
    {
        avg = get_avg(sum, total);
        cout << "sum / total = avg | " << sum << " / " << total << " = " << avg << endl;
    }
    catch (DevideByZeroException &e)
    {
        cerr << "ERROR: " << e.message() << endl;
    }
    catch (NegativeValueException &e)
    {
        cerr << "ERROR: " << e.message() << endl;
    }

    cout << "Part after try/catch()" << endl;

    cout << "\n-= END =-" << endl;
    return 0;
}
