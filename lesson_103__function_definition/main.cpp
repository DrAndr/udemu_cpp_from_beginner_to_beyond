/**
 * Section 11 Function
 * Lesson 103
 * Subject: Function Definition
 * 
 * Example:
 *      Enter the radius of the circle: 12.2
        The area of a circle with radius 12.2 is 467.594
        Enter the radius of the celinder: 5.5
        Enter the height of the celinder: 13.7
        The volume of a cylinder with radius 5.5 and height 13.7 is 1301.95
 */

#include <iostream>
#include <cmath>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius)
{
    return pi * pow(radius, 2);
}

void area_circle()
{
    double radius{};

    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "\nThe area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
    return;
}

double calc_volume_celinder(double radius, double height)
{
    return pi * pow(radius, 2) * height;
}

void volume_cylinder()
{

    double radius{};
    double height{};

    cout << "\nEnter the radius of the celinder: ";
    cin >> radius;
    cout << "\nEnter the height of the celinder: ";
    cin >> height;

    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_celinder(radius, height) << endl;
    return;
}

int main()
{
    area_circle();
    volume_cylinder();

    cout << endl;

    return 0;
}
