/**
 * Section 18
 * Subject: Excaptions Handling
 * Lesson 206 [ Basic Concepts and Simple Example: Dividing by Zero ]
 *
 * Expected result 1:
        Enter 'Sum' value: 7
        Enter 'Total' value: 0
        catch (int &e)... e = 0
        ERROR: Can't Devide by zero!
        Part after try/catch()

        -= END =-
Expected result 2:
        Enter 'Sum' value: 456
        Enter 'Total' value: 234
        sum / total = avg | 456 / 234 = 1.94872
        Part after try/catch()

        -= END =-
 */

#include <iostream>

using namespace std;

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
        if (total == 0)
            throw 0;

        avg = static_cast<double>(sum) / static_cast<double>(total);
        cout << "sum / total = avg | " << sum << " / " << total << " = " << avg << endl;
    }
    catch (int &e)
    {
        cout << "catch (int &e)... e = " << e << endl;
        cout << "ERROR: Can't Devide by zero!" << endl;
    }

    cout << "Part after try/catch()" << endl;

    cout << "\n-= END =-" << endl;
    return 0;
}
