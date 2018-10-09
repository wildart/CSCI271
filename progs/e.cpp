// Lab 5
#include <iostream>
#include <string>
using namespace std;

unsigned int factorial(unsigned int n)
{
    // Version 3
    unsigned int result = 1;
    for(unsigned int counter = n;counter > 1;--counter)
            result *= counter;
    return result;

    /*
    // Version 1
    if (n <= 1)
        result = 1;
    else {
        result = 1;
        unsigned int counter=1;
        while(counter <= n)
        {
            result *= counter; //result = result * counter;
            ++counter; // counter += 1;
        }
    }
    return result;
    */

    /*
    // Version 2
    if (n <= 1)
        result = 1;
    else {
        result = 1;

        for(unsigned int counter=1;counter <= n;++counter)
            result *= counter;
    }
    return result;
    */

}

int main()
{
    unsigned int acc;
    cout << "Enter desired accuracy: ";
    cin >> acc;

    //e = 1 + 1/1! + 1/2! + ....
    double e = 0.0;
    unsigned int den;

    for(den=0;den<acc;den=den+1)
        e = e + 1.0 / factorial(den);

    cout << "e=" << e << endl;
    return 0;
}

