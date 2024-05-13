/**
 * Section 20
 * Subject: Standard Template Library [ STL ]
 * Lesson 239 [ Macros example ]
 *
 * Expected result:
        MAX('A', 'B') = B
        MAX(3, 5) = 5
        MAX(3.2, 3.0) = 3.2
        100 / POW(5) = 4
        100 / (5 * 5) = 4
 */

#include <iostream>

#define MAX(a, b) ((a > b) ? a : b)
#define POW(a) ((a) * (a))

int main()
{

    std::cout << "MAX('A', 'B') = " << MAX('A', 'B') << std::endl;
    std::cout << "MAX(3, 5) = " << MAX(3, 5) << std::endl;
    std::cout << "MAX(3.2, 3.0) = " << MAX(3.2, 3.0) << std::endl;

    std::cout << "100 / POW(5) = " << 100 / POW(5) << std::endl;
    std::cout << "100 / (5 * 5) = " << 100 / (5 * 5) << std::endl;

    std::cout << std::endl;
    return 0;
}
