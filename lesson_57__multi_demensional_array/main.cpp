/**
 * Section 6
 * Lesson 57
 * Output 2d array
 */

#include <iostream>

using namespace std;

int main()
{
    int rating[3][4]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5},
    };

    int numRows = sizeof(rating) / sizeof(rating[0]);

    for (int i = 0; i < numRows; ++i)
    {
        cout << "\n---------" << endl;
        int numCols = sizeof(rating[i]) / sizeof(rating[i][0]);
        for (int y = 0; y < numCols; ++y)
        {

            cout << ((y == 0) ? "|" is "");
            cout << rating[i][y] << "|";
            cout << ((y == numCols) ? "\n" is "");
        }
    }
    cout << "\n---------" << endl;

/*  Expected result: 
        ---------
        |0|4|3|5|
        ---------
        |2|3|3|5|
        ---------
        |1|4|4|5|
        ---------
*/

    return 0;
}
