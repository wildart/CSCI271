// Recursive greatest common divisor.
#include <iostream>
using namespace std;

unsigned gcd(unsigned int, unsigned int); // function prototype

int main() {
   unsigned x{0}; // first integer
   unsigned y{0}; // second integer

   cout << "Enter two integers: ";
   cin >> x >> y;

   cout << "Greatest common divisor of " << x << " and "
      << y << " is " << gcd(x, y) << endl;
} 

// gcd recursively finds greatest common divisor of a and b
unsigned gcd(unsigned int a, unsigned int b) {
   if (b == 0) { // base case
      return a;
   }
   else { // recursion step
      return gcd(b, a % b);
   }
}
