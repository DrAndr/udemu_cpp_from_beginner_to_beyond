/**
 * Section 11
 * Lesson 114
 * Subject: Function
 *          Refactoring of challenge from section 9
 *          lesson_90.1__challenge
 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void print_numbers(const vector<int> &);
void add_number(vector<int> &);
void display_mean(const vector<int> &);
void display_smalest(const vector<int> &);
void display_largest(const vector<int> &);
void numbers_loop(vector<int> &);

int main()
{
    vector<int> nums{};

    numbers_loop(nums);

    cout << endl;
    return 0;
}

void print_numbers(const vector<int> &nums)
{
    int numsSize = nums.size();
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
    return;
}

void add_number(vector<int> &nums)
{
    int num;
    cout << "Enter an integer to add to the list: ";
    cin >> num;

    nums.push_back(num);
    cout << "\n"
         << num << " is added;" << endl;
    return;
}

void display_mean(const vector<int> &nums)
{
    int numsSize = nums.size();
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
    return;
}

void display_smalest(const vector<int> &nums)
{
    int numsSize = nums.size();
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
    return;
}
void display_largest(const vector<int> &nums)
{
    int numsSize = nums.size();
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
    return;
}

void numbers_loop(vector<int> &nums)
{
    char option;
    bool quit{false};
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
            print_numbers(nums);
            break;
        case 'A':
        case 'a':
            add_number(nums);
            break;
        case 'M':
        case 'm':
            display_mean(nums);
            break;
        case 'S':
        case 's':
            display_smalest(nums);
            break;
        case 'L':
        case 'l':
            display_largest(nums);
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

    return;
}
