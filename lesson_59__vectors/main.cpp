/**
 * Section 6
 * Lesson 57
 * Subject: vector
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "========================================" << endl;

    // init vector with predefined values
    vector<int> test_scores{100, 200, 300, 400, 500};

    // old method accesing to the value
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\n=== accesing to the vector values, in the OOP style ===" << endl;
    cout << "First test_scores.at(0): " << test_scores.at(0) << endl;
    cout << "Second test_scores.at(1): " << test_scores.at(1) << endl;
    cout << "Third test_scores.at(2): " << test_scores.at(2) << endl;
    cout << "Fourth test_scores.at(3): " << test_scores.at(3) << endl;
    cout << "Fifth test_scores.at(4): " << test_scores.at(4) << endl;

    return 0;
}
