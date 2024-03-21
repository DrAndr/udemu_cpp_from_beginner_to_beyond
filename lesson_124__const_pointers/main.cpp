/**
 * Section 12
 * Subject: Pointers and references
 * Lesson 124 [ Const and Pointers ]
 */

#include <iostream>

using namespace std;

int main()
{

    int high_temp{100};
    int low_temp{70};

    int *score_ptr{&high_temp};

    // *score_ptr = 95; // ✅ ok
    // score_ptr = &low_temp; // ✅ ok
    // ===============================

    const int *score_1_ptr{&high_temp};

    // *score_1_ptr = 95; // ❌ ERROR
    // score_1_ptr = &low_temp; // ✅ ok
    // ===============================

    int *const score_2_ptr{&high_temp};

    // *score_2_ptr = 95; // ✅ ok
    // score_2_ptr = &low_temp; // ❌ ERROR
    // ===============================

    const int *const score_3_ptr{&high_temp};

    // *score_3_ptr = 95; // ❌ ERROR
    // score_3_ptr = &low_temp; // ❌ ERROR
    // ===============================

    cout << endl;
    return 0;
}
