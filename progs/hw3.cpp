/*
 * =====================================================================================
 *
 *       Filename:  hw3.cpp
 *
 *    Description:  Calculate pi/4 using approximation formula. 
 *
 *        Version:  1.0
 *        Created:  10/18/2018 10:59:31 AM
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int k = 3; // number of columns for output
    unsigned int n;  // precision (number of terms)
    double result = 0.0;   

    // Prompt the user to enter value of n
    cout << "Enter desired accuracy (number of terms): ";
    cin >> n;

    // output formatting
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);

    // print header
    for (unsigned int i = 0; i < k; ++i)
        cout << left << setw(10) << "i" << setw(10) << "Term";
    cout << endl;


    // calculate value of pi/4
    int sign = 1;
    for(unsigned int i=0; i<n; ++i)
    {
        result += sign/(2.0*i+1.0);
        sign *= -1; // flip sign

        cout << left << setw(10) << i << setw(10) << result;

        if ((i+1) % k == 0) // if we printed k columns
            cout << endl; // go to a new line
    }

    // output atan(1) for comparison
    cout << endl << "atan(1) = pi/4: " << atan(1.0) << endl;

    return 0;
}

