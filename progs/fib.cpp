// Recursive function fibonacci.
#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long); // function prototype

int main() {

    int n;
    cout << "Enter number index: ";
    cin >> n;

    cout << "fibonacci(" << n << ") = " << fibonacci(n) << endl;

    // calculate the fibonacci values of 0 through 10
    for (unsigned int counter = 0; counter <= 10; ++counter)
        cout << "fibonacci(" << counter << ") = "
             << fibonacci(counter) << endl;
}

// recursive function fibonacci                            
unsigned long fibonacci(unsigned long number) {
   if ((0 == number) || (1 == number)) { // base cases     
      return number;
   }
   else { // recursion step                                
      return fibonacci(number - 1) + fibonacci(number - 2);
   }
}
