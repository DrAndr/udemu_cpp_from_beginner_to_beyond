/**
 * Section 12
 * Lesson 119
 * Subject: Pointers and references
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *p;

    cout << "Value of 'p' is: " << p << endl;       // 0x1f
    cout << "Address of 'p' is: " << &p << endl;    // 0x7ff7b5a1d510
    cout << "Size of 'p' is: " << sizeof p << endl; // 8
    p = nullptr;
    cout << "Now value of 'p' is: " << p << endl; // 0x0

    cout << "====================" << endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};
    cout << "Size of 'int p1' is: " << sizeof p1 << endl;                // 8
    cout << "Size of 'double p2' is: " << sizeof p2 << endl;             // 8
    cout << "Size of 'unsigned long long p3' is: " << sizeof p3 << endl; // 8
    cout << "Size of 'vector<string> p4' is: " << sizeof p4 << endl;     // 8
    cout << "Size of 'string p5' is: " << sizeof p5 << endl;             // 8
    cout << "====================" << endl;

    int score{10};
    double high_temp{100.7};

    int *scor_ptr{nullptr};
    scor_ptr = &score;
    cout << "Value of 'score' is: " << score << endl;       // 0x1f
    cout << "Address of 'score' is: " << &score << endl;    // 0x7ff7b5a1d510
    cout << "Value of 'scor_ptr' is: " << scor_ptr << endl; // 8

    // scor_ptr = &high_temp;    // Error, cant assigne double var to _ptr of the int type

    cout << endl;
    return 0;
}
