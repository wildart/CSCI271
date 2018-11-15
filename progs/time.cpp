/*
 * =====================================================================================
 *
 *       Filename:  time.cpp
 *
 *    Description:  Calculate Number of Minutes
 *
 *        Version:  1.0
 *        Created:  11/15/2018 08:17:08 AM
 *       Compiler:  g++
 *
 * =====================================================================================
 */
#include <iostream>
#include  <cmath>
using namespace std;

int datetimeToMinutes(int d, int h, int m);

int main()
{
    int days, hours, mins;
    cout << "Enter first date as (d,h,m): ";
    cin >> days >> hours >> mins;

    int d1 = datetimeToMinutes(days, hours, mins);
    if (d1 < 0){
        cout << "Incorrect datetime entry";
        return 1;
    }
    cout << d1 << endl;

    cout << "Enter second date as (d,h,m): ";
    cin >> days >> hours >> mins;

    int d2 = datetimeToMinutes(days, hours, mins);
    if (d2 < 0){
        cout << "Incorrect datetime entry";
        return 1;
    }
    cout << d2 << endl;

    cout << "Diff = " << fabs(d1 - d2);

    return 0;
}

int datetimeToMinutes(int d, int h, int m)
{
    if (d<0 and d>30)
        return -1;
    if (h<0 and h>23)
        return -1;
    if (m<0 and m>59)
        return -1;
    return (24*d+h)*60+m;
}

