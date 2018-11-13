/*
 * =====================================================================================
 *
 *       Filename:  hypotenuse.cpp
 *
 *    Description:  Calculate hypotenuse of the right triangle
 *
 *        Version:  1.0
 *        Created:  11/13/2018 08:47:05 AM
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b);

int main()
{
    double a,b;
    cout << "Enter 2 sides: ";
    cin >> a >> b;
    double h = hypotenuse(a,b);
    cout << "hypotenuse = " << h;
}

double hypotenuse(double s1, double s2)
{
    return sqrt(s1*s1+s2*s2);
}
