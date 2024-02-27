/**
 * Section 9 - Controlling program flow
 * Lesson 80
 * Subject: switch-case
 */

#include <iostream>

using namespace std;

int main()
{
    int day_code{};

    cout << "Enter the number of the day of the week: ";
    cin >> day_code;
    switch (day_code)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default:
        cout << "Error - illegal day code";
    }
    cout << endl;

    return 0;
}
