/*
 * =====================================================================================
 *
 *       Filename:  pi.cpp
 *
 *    Description:  Calculate value of PI
 *
 *        Version:  1.0
 *        Created:  10/30/2018 08:39:34 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>

double randcoord(); // prototype

int main()
{
    double pi;
    int N, cir_count = 0;
    std::cout << "Enter number of iterations:";
    std::cin >> N;
    
    for(int i = 0; i < N; ++i){
        double x = randcoord();
        double y = randcoord();
        //std::cout << x << ", " << y << std::endl;
        if (x*x + y*y <= 1)
            cir_count++;
    }    
    pi = (4.0*cir_count)/N;
    std::cout << "pi = " << pi << std::endl;
}

double randcoord()
{
    return rand() / static_cast<double>(RAND_MAX);
}

