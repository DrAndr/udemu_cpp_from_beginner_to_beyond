/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 219 [ Stream Manipulators Integers ]
 *
 * Expected result:
            ----------------

            => num_1
            dec: 255
            hex: ff
            oct: 377

            => num_2
            dec: -255
            hex: ffffff01
            oct: 37777777401

            ------- showbase; ---------

            => num_1
            dec: 255
            hex: 0xff
            oct: 0377

            => num_2
            dec: -255
            hex: 0xffffff01
            oct: 037777777401

            ------- uppercase; ---------

            => num_1
            dec: 255
            hex: 0XFF
            oct: 0377

            => num_2
            dec: -255
            hex: 0XFFFFFF01
            oct: 037777777401

            ------- showpos; ---------
            => num_1: +255
            => num_2: -255

            ------- noshowpos; ---------
            => num_1: 255
            => num_2: -255

            -= END =-
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num_1{255};
    int num_2{-255};

    cout << "\n----------------" << endl;
    cout << "\n => num_1" << endl;

    cout << "dec: " << dec << num_1 << endl;
    cout << "hex: " << hex << num_1 << endl;
    cout << "oct: " << oct << num_1 << endl;

    cout << "\n => num_2" << endl;
    cout << "dec: " << dec << num_2 << endl;
    cout << "hex: " << hex << num_2 << endl;
    cout << "oct: " << oct << num_2 << endl;

    cout << "\n------- showbase; ---------" << endl;

    cout << showbase; // noshowbase

    cout << "\n => num_1" << endl;
    cout << "dec: " << dec << num_1 << endl;
    cout << "hex: " << hex << num_1 << endl;
    cout << "oct: " << oct << num_1 << endl;

    cout << "\n => num_2" << endl;
    cout << "dec: " << dec << num_2 << endl;
    cout << "hex: " << hex << num_2 << endl;
    cout << "oct: " << oct << num_2 << endl;

    cout << "\n------- uppercase; ---------" << endl;

    cout << uppercase; // nouppercase

    cout << "\n => num_1" << endl;
    cout << "dec: " << dec << num_1 << endl;
    cout << "hex: " << hex << num_1 << endl;
    cout << "oct: " << oct << num_1 << endl;

    cout << "\n => num_2" << endl;
    cout << "dec: " << dec << num_2 << endl;
    cout << "hex: " << hex << num_2 << endl;
    cout << "oct: " << oct << num_2 << endl;
    cout << nouppercase << noshowbase << dec;
    // OR:
    // cout << resetiosflags(ios::uppercase);
    // cout << resetiosflags(ios::showbase);
    // cout << resetiosflags(ios::dec);

    cout << "\n------- showpos; ---------" << endl;

    cout << showpos; // noshowpos

    cout << " => num_1: " << num_1 << endl;
    cout << " => num_2: " << num_2 << endl;
    cout << "\n------- noshowpos; ---------" << endl;
    cout << noshowpos;
    cout << " => num_1: " << num_1 << endl;
    cout << " => num_2: " << num_2 << endl;

    cout << "\n-= END =-" << endl;
    return 0;
}
