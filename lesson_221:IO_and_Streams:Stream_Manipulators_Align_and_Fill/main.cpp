/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 221 [ Stream Manipulators Align and Fill ]
 *
 * Expected result:
            -- Defaults -----------------

            1234567890123456789012345678901234567890
            12341234.57Hello

            -- Defaults - one per line --

            1234567890123456789012345678901234567890
            1234
            1234.57
            Hello

            -- std::setw(10) for num_1 --

            1234567890123456789012345678901234567890
                12341234.57Hello
                1234
            1234.57
            Hello

            -- std::setw(10) for num_1 and num_2 --

            1234567890123456789012345678901234567890
                1234   1234.57Hello

            -- std::setw(10) for num_1 and num_2 and hello--

            1234567890123456789012345678901234567890
                1234   1234.57     Hello

            -- std::setw(10)+std::left+setfill('-') for num_1 & num_2 & hello --

            1234567890123456789012345678901234567890
            1234------1234.57---Hello-----

            -- std::setw(10)+std::left+ different setfill() for num_1 & num_2 & hello --

            1234567890123456789012345678901234567890
            1234******1234.57$$$Hello#####

            -= END =-
 */

#include <iostream>
#include <iomanip>
using namespace std;

void ruler()
{
    cout << "\n\033[0;33m1234567890\033[0;37m1234567890\033[0;33m1234567890\033[0;37m1234567890" << endl;
}

int main()
{
    int num_1{1234};
    double num_2{1234.5678};
    string hello{"Hello"};

    cout << "\n-- Defaults -----------------" << endl;
    ruler();
    cout << num_1 << num_2 << hello << endl;

    cout << "\n-- Defaults - one per line --" << endl;
    ruler();
    cout << num_1 << endl;
    cout << num_2 << endl;
    cout << hello << endl;

    cout << "\n-- std::setw(10) for num_1 --" << endl;
    ruler();
    cout << setw(10) << num_1 << num_2 << hello << endl;
    cout << setw(10) << num_1 << endl;
    cout << num_2 << endl;
    cout << hello << endl;

    cout << "\n-- std::setw(10) for num_1 and num_2 --" << endl;
    ruler();
    cout << setw(10) << num_1
         << setw(10) << num_2
         << hello << endl;

    cout << "\n-- std::setw(10) for num_1 and num_2 and hello--" << endl;
    ruler();
    cout << setw(10) << num_1
         << setw(10) << num_2
         << setw(10) << hello << endl;

    cout << "\n-- std::setw(10)+std::left+setfill('-') for num_1 & num_2 & hello --" << endl;
    ruler();
    cout << setfill('-');
    cout << setw(10) << left << num_1
         << setw(10) << left << num_2
         << setw(10) << left << hello << endl;

    cout << "\n-- std::setw(10)+std::left+ different setfill() for num_1 & num_2 & hello --" << endl;
    ruler();
    cout << setfill('-');
    cout << setw(10) << left << setfill('*') << num_1
         << setw(10) << left << setfill('$') << num_2
         << setw(10) << left << setfill('#') << hello << endl;

    cout << "\n-= END =-" << endl;
    return 0;
}
