/*
 * =====================================================================================
 *
 *       Filename:  hw5.cpp
 *
 *    Description:  Use a one-dimensional array to solve the following problem.
                    Read in 10 numbers, and save them in the array. Print all elements
                    in the array that are it is greater than all the elements to
                    its right side, and the rightmost element is always a greatest one.
 *
 *        Version:  1.0
 *        Created:  12/26/2018 12:16:37 PM
 *
 * =====================================================================================
 */

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> numbers;

    //Read in 10 numbers and save them in the array "numbers"
    cout << "Please enter 10 numbers: ";
    for(int q = 0; q < numbers.size(); q++)
        cin >> numbers[q];

    //Print the number is greater than all the numbers to its right side
    cout << "\nThe number is greater than all the numbers to its right side: ";
    for (int i=0; i < numbers.size(); i++){
        int j;
        for (j = i+1; j < numbers.size(); j++)
        {
            if (numbers[i] <= numbers[j])
                break;
        }
        if (j == numbers.size()) // the loop didn't break
            cout << numbers[i] << " ";
    }
}

