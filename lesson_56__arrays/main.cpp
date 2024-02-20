/**
 * Section 6
 * Lesson 56
 * Declaring and using arrays
 */

#include <iostream>
#include <array>

using namespace std;

int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int vowelsLength = sizeof(vowels) / sizeof(vowels[0]);

    cout << "\nThe first vowels is: " << vowels[0] << endl;
    cout << "\nThe last vowels is: " << vowels[vowelsLength - 1] << endl;

    // cin >> vowels[5];  // it's conducts to critical error of the app

    cout << "========================================" << endl;

    double high_temperature[]{90.1, 89.7, 77.5, 83.2};
    cout << "\nThe first high temperature is: " << high_temperature[0] << endl;
    high_temperature[0] = 100.1;
    cout << "\nUpdated first high temperature is: " << high_temperature[0] << endl;

    cout << "========================================" << endl;

    // int test_scores[5]{}; // inited the array with 5 values equival 0
    int test_scores[]{100, 200, 300, 400, 500};
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    // put new values
    cout << "\nEnter 5 test scores: " << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    // check result
    cout << "\nNew First score at index 0:    " << test_scores[0] << endl;
    cout << "New Second score at index 1:   " << test_scores[1] << endl;
    cout << "New Third score at index 2:    " << test_scores[2] << endl;
    cout << "New Fourth score at index 3:   " << test_scores[3] << endl;
    cout << "New Fifth score at index 4:    " << test_scores[4] << endl;

    cout << "========================================" << endl;

    cout << "\nNotice what the value of the array names is: " << test_scores << endl; // some thing like this HEX: 0x7ff7b9f204f0

    return 0;
}
