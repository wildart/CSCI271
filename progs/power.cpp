#include <iostream>
using namespace std;

double power(double b, unsigned int e);

int main()
{
    double base;
    unsigned int exponent;

    // Asking user to enter base & exponent values
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    // Calculating & printing result
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
}

// Recursive implementation
double power(double b, unsigned int e)
{
    if (exponent <= 1)
        return b; // base case
    else
        return b * power(b, e - 1); // recursive call
}

/*
// Iterative implementation
double power(double b, unsigned int e)
{
    double result = 1;
    for(unsigned int c{0}; c < e; ++c)
    {
        result *= b;
    }
    return result;
}
*/

