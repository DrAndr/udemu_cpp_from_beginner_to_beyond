/**
 * Section 9 - Controlling program flow
 * Lesson 90
 * Subject: nested loops practice
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec{2, 4, 6, 8};

    int result{};
    int length = vec.size();

    if (length > 1)
    {
        for (int i{}; i < (length - 1); ++i)
        {
            for (int y{i + 1}; y < length; ++y)
            {
                if (i == y)
                    continue;

                cout << result << " += " << vec.at(i) << " * " << vec.at(y) << " = " << (vec.at(i) * vec.at(y)) << endl;
                result += (vec.at(i) * vec.at(y));
            }
        }
    }

    /**
     * expected result
        0 += 2 * 4 = 8
        8 += 2 * 6 = 12
        20 += 2 * 8 = 16
        36 += 4 * 6 = 24
        60 += 4 * 8 = 32
        92 += 6 * 8 = 48
        140
    */

    cout << result << endl;

    return 0;
}
