/**
 * Section 6
 * Lesson 59
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

    cout << "\n=== home work ===" << endl;

    vector <int> vector_1;
    vector <int> vector_2;

    cout << "\n=== vector_1 ===" << endl;
    vector_1.push_back(10);
    cout << "First vector_1.at(0): " << vector_1.at(0) << endl;
    vector_1.push_back(20);
    cout << "Second vector_1.at(1): " << vector_1.at(1) << endl;
    cout << "vector_1.size(): " << vector_1.size() << endl;

    cout << "\n=== vector_2 ===" << endl;
    vector_2.push_back(100);
    cout << "First vector_2.at(0): " << vector_2.at(0) << endl;
    vector_2.push_back(200);
    cout << "Second vector_2.at(1): " << vector_2.at(1) << endl;
    cout << "vector_2.size(): " << vector_2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);
    cout << "\nvector_2d.size(): " << vector_2d.size() << endl;

    cout << "\n=== vector_2d ===" << endl;
    cout << "First vector_2d.at(0).at(0): " << vector_2d.at(0).at(0) << endl;
    cout << "Second vector_2d.at(0).at(1): " << vector_2d.at(0).at(1) << endl;
    cout << "Third vector_2d.at(1).at(0): " << vector_2d.at(1).at(0) << endl;
    cout << "Fourth vector_2d.at(1).at(1): " << vector_2d.at(1).at(1) << endl;

    cout << "\n=== vectors modified ===" << endl;
    vector_1.at(0) = 1000;
    vector_1.at(1) = 2000;
    vector_2.at(0) = 3000;
    vector_2.at(1) = 4000;
    cout << "First vector_2d.at(0).at(0): " << vector_2d.at(0).at(0) << endl;
    cout << "Second vector_2d.at(0).at(1): " << vector_2d.at(0).at(1) << endl;
    cout << "Third vector_2d.at(1).at(0): " << vector_2d.at(1).at(0) << endl;
    cout << "Fourth vector_2d.at(1).at(1): " << vector_2d.at(1).at(1) << endl;
    return 0;
}
