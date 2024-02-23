/**
 * Section 8
 * Lesson 65 / 2
 * Subject: Convert EUR to USD
 */

#include <iostream>

using namespace std;

int main()
{
    const double usd_per_eur{1.19};
    double euros{0.0};
    double dollars{0.0};

    // visual part
    cout << "========================================" << endl;
    cout << "\nWelcome to the EUR to USD convertoer!" << endl;
    cout << "Enter the walue in EUR: ";
    cin >> euros;
    cout << "..." << endl;
    dollars = euros * usd_per_eur;
    cout << "The " << euros << " EUR is equivalent to " << dollars << " USD." << endl;
    cout << "========================================" << endl;

    return 0;
}
