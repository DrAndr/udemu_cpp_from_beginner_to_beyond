#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    cout << "Sizeof information" << endl;
    cout << "===========================" << endl;

    cout << "int: " << sizeof(int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;

    cout << "===========================" << endl;

    cout << "char: " << sizeof(char) << endl;
    cout << "string: " << sizeof(string) << endl;
    

    cout << "===========================" << endl;

    cout << "double: " << sizeof(double) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    cout << "===========================" << endl;

    

    return 0;
}