/**
 * Section 6
 * Lesson 50
 * Declaring and using constants
 *
 * Clculator of price for the room service.
 */

#include <iostream>

using namespace std;

int main()
{
    const double PRICE_PER_SMALL_ROOM{25.0};
    const double PRICE_PER_LARGE_ROOM{35.0};
    const int ESTIMATE_EXPIRY = {30};
    const int MIN_ROOMS_PER_ORDER = {1};
    const double SALES_TAX = {0.06};

    int number_of_small_rooms{0};
    int number_of_large_rooms{0};
    double main_price{0};

    cout << "Hello welcome to Frank's Carpet Cleaning Service" << endl;

    cout << "\nHow many small rooms would you like cleaned? " << endl;
    cin >> number_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned? " << endl;
    cin >> number_of_large_rooms;

    if (number_of_small_rooms + number_of_large_rooms < MIN_ROOMS_PER_ORDER)
    {
        cout << "Sorry, you should ordere at least " << MIN_ROOMS_PER_ORDER << " room...";
        return 0;
    }

    cout << "\nEstimate for carpet cleaninng service" << endl;
    if (number_of_small_rooms)
    {
        main_price = PRICE_PER_SMALL_ROOM * number_of_small_rooms;
        cout << "☞ Number of small rooms: " << number_of_small_rooms << endl;
        cout << "☞ Price per small room: " << PRICE_PER_SMALL_ROOM << "$" << endl;
    }

    if (number_of_large_rooms)
    {
        main_price += PRICE_PER_LARGE_ROOM * number_of_large_rooms;
        cout << "☞ Number of large rooms: " << number_of_large_rooms << endl;
        cout << "☞ Price per large room: " << PRICE_PER_LARGE_ROOM << "$" << endl;
    }

    int total_tax = main_price * SALES_TAX;

    cout << "-----------------" << endl;

    cout << "☞ Cost: " << main_price << "$" << endl;
    cout << "☞ Tax: " << total_tax << "$ ( " << SALES_TAX * 100 << "% )" << endl;
    cout << "=================" << endl;

    cout << "✓ Total estimate: " << main_price + total_tax << "$" << endl;
    cout << "☞ This estimate is valid for: " << ESTIMATE_EXPIRY << " days ⌛" << endl;

    return 0;
}