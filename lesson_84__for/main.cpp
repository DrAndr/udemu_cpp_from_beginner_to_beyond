/**
 * Section 9 - Controlling program flow
 * Lesson 84
 * Subject: range-based for Loop
 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

    /**
     *  // this way alloved as to use var_name
     *  for(var_type var_name: sequence){
     *      statement;
     *  }
     */

    cout << "====== Example 1 ======" << endl;
    cout << "int scores[]{10, 20, 30,};" << endl;
    cout << "for(auto score: scores)" << endl;
    cout << "    cout << score << endl;" << endl;
    cout << "\nResult: " << endl;

    int scores[]{
        10,
        20,
        30,
    };
    for (auto score : scores)
        cout << score << endl;

    cout << "\n====== Example 2 ======" << endl;

    vector<double> temperatures{80.5, 77.9, 82.3, 84.1};
    double avg_temp{};
    double total{};

    for (auto temp : temperatures)
        total += temp;

    if (int size = temperatures.size())
        avg_temp = total / size;

    cout << fixed << setprecision(1);
    cout << "Average temperature is: " << avg_temp << endl;

    cout << "\n====== Example 3 ======" << endl;

    for (auto c : "some file name") // some_file_name
    {
        cout << (c == ' ' ? '_' : c);
    }

    cout << endl;
    return 0;
}
