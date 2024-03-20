/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 120
 *      Dereferencing a pointer
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl; // 100

    *score_ptr = 200; // it change "score" value

    cout << *score_ptr << endl; // 200
    cout << score << endl;      // 200

    cout << "---------------------------------" << endl;

    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl; // 100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl; // 37.4
    cout << high_temp << endl; // 100.7

    cout << "---------------------------------" << endl;

    string name{"Frank"};
    string *string_ptr{&name};

    cout << *string_ptr << endl; // Frank
    *string_ptr = "Andrey";
    cout << *string_ptr << endl; // Andrey
    cout << name << endl;        // Andrey

    cout << "---------------------------------" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry

    cout << "Stooges: [ " << endl;
    for (auto stooge : *vector_ptr)
        cout << stooge << " ";
    cout << "]" << endl;

    cout << endl;
    return 0;
}
