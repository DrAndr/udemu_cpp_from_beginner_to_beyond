/**
 * Section 19
 * Subject: I/O And Streams
 * Lesson 222 [ Section 19 Challenge 1 ]
 *
 * Expected result:
|--------------------------------------------------------------------|
|                    Tour Ticket Prices from Miami                   |
|--------------------------------------------------------------------|
|Country            | City             |    Population|         Price|
|--------------------------------------------------------------------|
|Colombia           | Bogota           |       8778000|        400.98|
|                   | Cali             |       2401000|        424.12|
|                   | Medellin         |       2464000|        350.98|
|                   | Cartagena        |        972000|        345.34|
|--------------------------------------------------------------------|
|Brazil             | Rio De Janiero   |      13500000|        567.45|
|                   | Sao Paulo        |      11310000|        975.45|
|                   | Salvador         |      18234000|        855.99|
|--------------------------------------------------------------------|
|Chile              | Valdivia         |        260000|        569.12|
|                   | Santiago         |       7040000|        520.00|
|--------------------------------------------------------------------|
|Argentina          | Buenos Aires     |       3010000|        723.77|
|--------------------------------------------------------------------|
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct City
{
    string name;
    long population;
    double cost;
};

struct Country
{
    string name;
    vector<City> cities;
};

struct Tours
{
    string title;
    vector<Country> countries;

    // Tours(string title, vector<Country> countries) : title{title}, countries{countries} {}
    // ~Tours() = default;
};

void line(int num = 69)
{
    cout << setfill('-');
    cout << "\n|" << setw(num) << "|" << endl;
    cout << setfill(' ');
}
void ruler()
{
    cout << "\033[0;33m1234567890\033[0;37m1234567890\033[0;33m1234567890\033[0;37m1234567890\033[0;33m1234567890\033[0;37m" << endl;
}

int main()
{
    const int total_width{70};
    const int col_1{20}; // Country name
    const int col_2{20}; // City name
    const int col_3{15}; // Population
    const int col_4{15}; // Cost

    vector<Country> countries{
        {
            "Colombia",
            {{"Bogota", 8778000, 400.98},
             {"Cali", 2401000, 424.12},
             {"Medellin", 2464000, 350.98},
             {"Cartagena", 972000, 345.34}},
        },
        {
            "Brazil",
            {{"Rio De Janiero", 13500000, 567.45},
             {"Sao Paulo", 11310000, 975.45},
             {"Salvador", 18234000, 855.99}},
        },
        {
            "Chile",
            {{"Valdivia", 260000, 569.12},
             {"Santiago", 7040000, 520.00}},
        },
        {"Argentina", {{"Buenos Aires", 3010000, 723.77}}},
    };
    std::string title{"Tour Ticket Prices from Miami"};
    Tours tours{title, countries};

    ruler();
    int title_float = ((total_width - tours.title.length()) / 2);

    line();
    std::cout << "|" << std::setw(title_float) << "" << tours.title << std::setw(title_float) << right << "|"; // IMPORTANT - << "" <<  it's fix for swet() and string from variable
    line();
    std::cout << std::setw(col_1) << std::left << "|Country"
              << std::setw(col_2 - 1) << std::left << "| City"
              << "|" << std::setw(col_3) << std::right << "Population|"
              << std::setw(col_4) << std::right << "Price|";
    line();

    std::cout << std::setfill(' ');                  // reset setfill to blank spaces
    std::cout << std::setprecision(2) << std::fixed; // for displaying the cost with 2 decimal digits

    // Note the use of the conditional operator to display the country name or "" for the first country

    for (Country country : tours.countries)
    {
        int country_cities_size = country.cities.size();
        for (size_t i = 0; i < country_cities_size; ++i)
        {
            // if (i == 0){line();}

            std::cout << std::setw(col_1) << std::left << ((i == 0) ? "|" + country.name : "|") // conditional operator
                      << std::setw(col_2 - 1) << std::left << "| " + country.cities.at(i).name << "|"
                      << std::setw(col_3 - 1) << std::right << country.cities.at(i).population << "|"
                      << std::setw(col_4 - 1) << std::right << country.cities.at(i).cost << "|";
            if (i == country_cities_size - 1)
            {
                line();
            }
            else
            {
                cout << endl;
            }
        }
    }

    std::cout << std::endl
              << std::endl;

    return 0;
}
