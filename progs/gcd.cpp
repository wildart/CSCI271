// Finds greatest common divisor (GCD) of 2 inputs.
#include <iostream>
using namespace std;

int gcd(int, int); // function prototype

int main() {
   int a{0}; // first number
   int b{0}; // second number

   // loop for 5 pairs of inputs
   for (unsigned int j{1}; j <= 5; ++j) {
      cout << "Enter two integers: ";
      cin >> a >> b;

      cout << "The greatest common divisor of " 
         << a << " and " << b << " is ";

      // find greatest common divisor of a and b
      cout <<  gcd(a, b) << endl;
   } 
} 

// gcd finds greatest common divisor of x and y
int gcd(int x, int y) {
   int greatest{1}; // current greatest common divisor, 1 is minimum

   // loop from 2 to smaller of x and y
   for (unsigned int i{2}; i <= ((x < y) ? x : y); ++i) {
      // if current i divides both x and y
      if (x % i == 0 && y % i == 0) {
         greatest = i; // update greatest common divisor
      }
   } 

   return greatest; // return greatest common divisor found
}
