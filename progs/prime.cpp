/*
 * =====================================================================================
 *
 *       Filename:  prime.cpp
 *
 *    Description:  Check if a number is a prime.
 *
 *        Version:  1.0
 *        Created:  11/13/2018 09:04:03 AM
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isprime(unsigned int n);

int main()
{
    unsigned int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isprime(number))
        cout << "It is a prime number";
    else
        cout << "It is not a prime number";
}

bool isprime(unsigned int n)
{
    // loop through possible factors
    for (unsigned int i = 2; i <= static_cast<int>(sqrt(n)); ++i) {
      // if factor found, not prime
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}
