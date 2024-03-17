/**
 * Section 11 Function
 * Lesson 110
 * Subject: Scope Rules
 */

#include <iostream>
using namespace std;

void static_local_example()
{
    static int num{}; // At the start static_local_example num is: 0;
    num += 1000;
    cout << num << endl;
    return;
}

int main()
{
    int num{100};
    int num_1{500};

    cout << "Local num is: " << num << " in the main scope;" << endl; // 100

    // create a new level of scope
    {
        int num{200};
        cout << "Local num is: " << num << " in the inner scope in the main;" << endl;     // 200
        cout << "Local num_1 is: " << num_1 << " in the inner scope in the main;" << endl; // 500
    }

    cout << "Local num is: " << num << " in the main scope, after inner scope;" << endl; // 100

    cout << "===========================================================" << endl;
    static_local_example(); // num becom 1000
    static_local_example(); // num becom 2000
    static_local_example(); // num becom 3000
    static_local_example(); // num becom 4000
    return 0;
}
