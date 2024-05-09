/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 220 [ Stream Manipulators Floating point ]
 *
 * Expected result:
                    Declaration:
                        double num_1{123456789.987654321};
                        double num_2{1234.5678};
                        double num_3{1234.0};

                    - Defaults ----------------------------------
                    num_1: 1.23457e+08
                    num_2: 1234.57
                    num_3: 1234

                    - setprecision(2) ---------------------------
                    num_1: 1.2e+08
                    num_2: 1.2e+03
                    num_3: 1.2e+03

                    - setprecision(5) --------------------------
                    num_1: 1.2346e+08
                    num_2: 1234.6
                    num_3: 1234

                    - setprecision(9) --------------------------
                    num_1: 123456790
                    num_2: 1234.5678
                    num_3: 1234

                    - setprecision(3) + fixed ------------------
                    num_1: 123456789.988
                    num_2: 1234.568
                    num_3: 1234.000

                    - setprecision(3) + scientific -------------
                    num_1: 1.235e+08
                    num_2: 1.235e+03
                    num_3: 1.234e+03

                    - setprecision(3) + scientific + uppercase -
                    num_1: 1.235E+08
                    num_2: 1.235E+03
                    num_3: 1.234E+03

                    - setprecision(3) + fixed + showpos --------
                    num_1: +123456789.988
                    num_2: +1234.568
                    num_3: +1234.000

                    - setprecision(10) + showpoint --------
                    num_1: 123456790.0
                    num_2: 1234.567800
                    num_3: 1234.000000

                    - Back to the defaults -----------------
                    num_1: 1.23457E+08
                    num_2: 1234.57
                    num_3: 1234
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num_1{123456789.987654321};
    double num_2{1234.5678};
    double num_3{1234.0};

    cout << "Declaration: " << endl;
    cout << "    double num_1{123456789.987654321};" << endl;
    cout << "    double num_2{1234.5678};" << endl;
    cout << "    double num_3{1234.0};" << endl;

    cout << "\n- Defaults ----------------------------------" << endl;

    cout << "num_1: " << num_1 << endl; // num_1: 1.23457e+08
    cout << "num_2: " << num_2 << endl; // num_2: 1234.57
    cout << "num_3: " << num_3 << endl; // num_3: 1234

    cout << "\n- setprecision(2) ---------------------------" << endl;
    cout << setprecision(2);
    cout << "num_1: " << num_1 << endl; // num_1: 1.2e+03
    cout << "num_2: " << num_2 << endl; // num_2: 1.2e+03
    cout << "num_3: " << num_3 << endl; // num_3: 1.2e+03

    cout << "\n- setprecision(5) --------------------------" << endl;
    cout << setprecision(5);
    cout << "num_1: " << num_1 << endl; // num_1: 1.2346e+08
    cout << "num_2: " << num_2 << endl; // num_2: 1234.6
    cout << "num_3: " << num_3 << endl; // num_3: 1234

    cout << "\n- setprecision(9) --------------------------" << endl;
    cout << setprecision(9);
    cout << "num_1: " << num_1 << endl; // num_1: 123456790
    cout << "num_2: " << num_2 << endl; // num_2: 1234.5678
    cout << "num_3: " << num_3 << endl; // num_3: 1234

    cout << "\n- setprecision(3) + fixed ------------------" << endl;
    cout << setprecision(3) << fixed;
    cout << "num_1: " << num_1 << endl; // num_1: 123456789.988
    cout << "num_2: " << num_2 << endl; // num_2: 1234.568
    cout << "num_3: " << num_3 << endl; // num_3: 1234.000

    cout << "\n- setprecision(3) + scientific -------------" << endl;
    cout << setprecision(3) << scientific;
    cout << "num_1: " << num_1 << endl; // num_1: 1.235e+08
    cout << "num_2: " << num_2 << endl; // num_2: 1.235e+03
    cout << "num_3: " << num_3 << endl; // num_3: 1.234e+03

    cout << "\n- setprecision(3) + scientific + uppercase -" << endl;
    cout << setprecision(3) << scientific << uppercase;
    cout << "num_1: " << num_1 << endl; // num_1: 1.235e+08
    cout << "num_2: " << num_2 << endl; // num_2: 1.235e+03
    cout << "num_3: " << num_3 << endl; // num_3: 1.234e+03

    cout << "\n- setprecision(3) + fixed + showpos --------" << endl;
    cout << setprecision(3) << fixed << showpos;
    cout << "num_1: " << num_1 << endl; // num_1: 123456789.988
    cout << "num_2: " << num_2 << endl; // num_2: 1234.568
    cout << "num_3: " << num_3 << endl; // num_3: 1234.000

    // back to the defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);

    cout << "\n- setprecision(10) + showpoint --------" << endl;
    cout << setprecision(10) << showpoint;
    cout << "num_1: " << num_1 << endl; // num_1: 123456790.0
    cout << "num_2: " << num_2 << endl; // num_2: 1234.567800
    cout << "num_3: " << num_3 << endl; // num_3: 1234.000000

    cout << "\n- Back to the defaults -----------------" << endl;
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);
    cout << setprecision(6);

    cout << "num_1: " << num_1 << endl; // num_1: 1.23457e+08
    cout << "num_2: " << num_2 << endl; // num_2: 1234.57
    cout << "num_3: " << num_3 << endl; // num_3: 1234

    cout << "\n-= END =-" << endl;
    return 0;
}
