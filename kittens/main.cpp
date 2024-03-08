/**
 * just for fun wit my daughter
 * 08.03.2024
 */

#include <iostream>

using namespace std;

int main()
{

    bool end{false};
    int count{};
    do
    {
        cout << "Сколько котят ты хочешь? ";
        cin >> count;
        if (count <= 0)
        {
            end = true;
        }
        for (auto i{0}; i < count; ++i)
        {
            if (i % 30 == 0)
            {
                cout << endl
                     << i;
            }
            cout << "🐈";
        }
        cout << endl;
    } while (end);
    cout << endl;

    return 0;
}
