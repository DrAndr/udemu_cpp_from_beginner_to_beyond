/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 122 [ Relationshep betwen arrays and pointers ]
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int scores[]{100, 95, 90};
    int *scores_ptr{scores};

    cout << "\nArray sucscrip notation ----" << endl;
    cout << scores[0] << endl; // 100
    cout << scores[1] << endl; // 95
    cout << scores[2] << endl; // 90

    cout << "\nPointer sucscrip notation ----" << endl;
    cout << scores_ptr[0] << endl; // 100
    cout << scores_ptr[1] << endl; // 95
    cout << scores_ptr[2] << endl; // 90

    cout << "\nArray offset notation ----" << endl;
    cout << *scores << endl;       // 100
    cout << *(scores + 1) << endl; // 95
    cout << *(scores + 2) << endl; // 90

    cout << "\nPointer offset notation ----" << endl;
    cout << *scores_ptr << endl;       // 100
    cout << *(scores_ptr + 1) << endl; // 95
    cout << *(scores_ptr + 2) << endl; // 90

    cout << "\nPointer offset links ----" << endl;
    cout << scores_ptr << endl;       // 0x7ff7b73d550c
    cout << (scores_ptr + 1) << endl; // 0x7ff7b73d5510
    cout << (scores_ptr + 2) << endl; // 0x7ff7b73d5514

    cout << "----------------" << endl;

    cout << endl;
    return 0;
}
