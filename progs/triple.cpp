/*
 * =====================================================================================
 *
 *       Filename:  triple.cpp
 *
 *    Description:  Pythagorean Triples
 *
 *        Version:  1.0
 *        Created:  10/11/2018 09:09:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

// Example program
#include <iostream>

int main()
{
    int a, b, c;
    for(a=1;a<=500;++a)
        for(b=1;b<=500;++b)
            for(c=1;c<=500;++c)
                if(a*a + b*b == c*c)
                    std::cout << a << "^2 + " << b << "^2 = " << c << "^2\n";
}
