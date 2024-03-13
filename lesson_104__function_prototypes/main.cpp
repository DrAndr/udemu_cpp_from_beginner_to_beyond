/**
 * Section 11 Function
 * Lesson 104
 * Subject: Function Prototypes
 */

#include <iostream>
#include <cmath>

using namespace std;

const double pi{3.14159};

// Prototype area
void area_circle();
void volume_cylinder();
double calc_area_circle(double);
double calc_volume_cylinder(double, double);

// main area
int main()
{
    area_circle();
    volume_cylinder();

    cout << endl;

    return 0;
}

// post declaration

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

double calc_volume_cylinder(double radius, double height)
{
    return pi * pow(radius, 2) * height;
}

void volume_cylinder()
{

    double radius{};
    double height{};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
    return;
}