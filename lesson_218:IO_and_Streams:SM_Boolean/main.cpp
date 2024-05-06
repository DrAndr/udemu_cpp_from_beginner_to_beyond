/**
 * Section 18
 * Subject: I/O And Streams
 * Lesson 218 [ Stream Manipulator - Boolean ]
 *
 * Expected result:
            (10 == 10) is 1
            (10 != 10) is 0

            Usage std::boolalpha
            (10 == 10) is true
            (10 != 10) is false

            Usage std::noboolalpha
            (10 == 10) is 1
            (10 != 10) is 0

            Usage cout.setf(ios::boolalpha);
            (10 == 10) is true
            (10 != 10) is false

            Usage cout << std::resetiosflags(ios::boolalpha);
            (10 == 10) is 1
            (10 != 10) is 0

            -= END =-
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    {
        cout << "(10 == 10) is " << (10 == 10) << endl; // 1
        cout << "(10 != 10) is " << (10 != 10) << endl; // 0
    }

    cout << "\nUsage std::boolalpha" << endl;
    {
        cout << boolalpha;                              // true | false
        cout << "(10 == 10) is " << (10 == 10) << endl; // true
        cout << "(10 != 10) is " << (10 != 10) << endl; // false
    }

    cout << "\nUsage std::noboolalpha" << endl;
    {
        cout << noboolalpha;                            // 1 | 0
        cout << "(10 == 10) is " << (10 == 10) << endl; // 1
        cout << "(10 != 10) is " << (10 != 10) << endl; // 0
    }

    cout << "\nUsage cout.setf(ios::boolalpha);" << endl;
    {
        cout.setf(ios::boolalpha);                      // true | false
        cout << "(10 == 10) is " << (10 == 10) << endl; // true
        cout << "(10 != 10) is " << (10 != 10) << endl; // false
    }

    cout << "\nUsage cout << std::resetiosflags(ios::boolalpha);" << endl;
    {
        cout << std::resetiosflags(ios::boolalpha);     // 1 | 0
        cout << "(10 == 10) is " << (10 == 10) << endl; // 1
        cout << "(10 != 10) is " << (10 != 10) << endl; // 0
    }

    cout << "\n-= END =-" << endl;
    return 0;
}
