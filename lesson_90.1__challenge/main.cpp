/**
 * Section 9 - Controlling program flow
 * Lesson 90.1
 * Subject: challenge
 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

    char option;
    bool quit{false};
    vector<int> nums{};
    int num{};

    do
    {

        cout << "P - Print numbers;" << endl;
        cout << "A - Add number;" << endl;
        cout << "M - Diesplay mean(average) of the numbers;" << endl;
        cout << "S - Display the smalest number;" << endl;
        cout << "L - Display the largest number;" << endl;
        cout << "Q - Quit" << endl;

        cout << "Enter your choice: ";
        cin >> option;
        cout << endl;

        int numsSize = nums.size();
        switch (option)
        {
        case 'P':
        case 'p':
            if (numsSize > 1)
            {
                cout << "[ ";
                for (int i{}; i < numsSize; ++i)
                {
                    cout << nums.at(i);
                    if (i != (numsSize - 1))
                        cout << ", ";
                }
                cout << " ]";
            }
            else
            {
                cout << "[] - The list is empty;" << endl;
            }

            break;
        case 'A':
        case 'a':
            cout << "Enter an integer to add to the list: ";

            cin >> num;
            nums.push_back(num);
            cout << "\n"
                 << num << "is added;" << endl;
            break;
        case 'M':
        case 'm':
            if (numsSize > 1)
            {
                cout << fixed << setprecision(1);
                int sum{};
                double avg{};
                for (auto n : nums)
                {
                    sum += n;
                }
                cout << "The mean(average) of numbers is: " << static_cast<double>(sum) / numsSize << ";" << endl;
            }
            else
            {
                cout << "Unable to calculate the mean - no data;" << endl;
            }

            break;
        case 'S':
        case 's':
            if (numsSize > 1)
            {
                int smallest{nums.at(0)};
                for (auto n : nums)
                    if (smallest > n)
                        smallest = n;

                cout << "The smallest number is: " << smallest << ";" << endl;
            }
            else
            {
                cout << "Unable to find smallest value - no data;" << endl;
            }
            break;
        case 'L':
        case 'l':
            if (numsSize > 1)
            {
                int largest{nums.at(0)};
                for (auto n : nums)
                    if (largest < n)
                        largest = n;

                cout << "The largest number is: " << largest << endl;
            }
            else
            {
                cout << "Unable to find largest value - no data;" << endl;
            }
            break;
        case 'Q':
        case 'q':
            quit = true;
            cout << "Goodbuy..." << endl;
            break;
        default:
            cout << "Unknown selection, please try again.";
            break;
        }
        cout << endl;
    } while (!quit);

    cout << endl;

    return 0;
}
