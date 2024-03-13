/**
 * Section 11 Function
 * Lesson 105
 * Subject: Converting temperature
 */

#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);
void temperature_conversion();

int main()
{
    temperature_conversion();
    cout << endl;
    return 0;
}

void temperature_conversion()
{

    double fahrenheit_temperature{};
    double celsius_temperature{};
    double kelvin_temperature{};

    cout << "\nEnter the temperature in the fahrenheit: ";
    cin >> fahrenheit_temperature;

    celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

    cout << "The fahrenheit temperature "
         << fahrenheit_temperature << " degrees is equivalent to "
         << celsius_temperature << " degrees celsius and "
         << kelvin_temperature << " degrees kelvin.";
}

double fahrenheit_to_celsius(double fahrenheit_temperature)
{
    return round((5.0 / 9.0) * (fahrenheit_temperature - 32));
}

double fahrenheit_to_kelvin(double fahrenheit_temperature)
{
    return round((5.0 / 9.0) * (fahrenheit_temperature - 32) + 273);
}
