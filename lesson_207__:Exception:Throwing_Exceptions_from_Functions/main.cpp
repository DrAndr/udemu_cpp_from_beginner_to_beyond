/**
 * Section 18
 * Subject: Excaptions Handling
 * Lesson 207 [ Throwing Exceptions from Functions ]
 *
 * Expected result 1:
        Enter 'Sum' value: 5
        Enter 'Total' value: 0
        ERROR: Can't Devide by zero!
        Part after try/catch()

        -= END =-
Expected result 2:
        Enter 'Sum' value: 5
        Enter 'Total' value: 5
        sum / total = avg | 5 / 5 = 1
        Part after try/catch()

        -= END =-
 */

#include <iostream>

using namespace std;

double get_avg(int sum, int total)
{
    if (total == 0)
        throw 0;

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
    catch (int &e)
    {
        cerr << "ERROR: Can't Devide by zero!" << endl;
    }

    cout << "Part after try/catch()" << endl;

    cout << "\n-= END =-" << endl;
    return 0;
}
