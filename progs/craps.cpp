/*
 * =====================================================================================
 *
 *       Filename:  craps.cpp
 *
 *    Description:  Unfinished
 *
 *        Version:  1.0
 *        Created:  10/25/2018 09:10:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int die();

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    while (true)
    {
        char play;
        cout << "Do you want to play? (y/n)";
        cin >> play;
        
        if (!(play == 'y' or play == 'Y'))
            break; // end of game
        
        int point;
        cout << "Enter your point number: ";
        cin >> point;
        
        int sum = 0;
        int die1, die2;
        while (sum <= 10)
        {
            die1 = die();
            die2 = die();
            sum += die1 + die2;
            cout << "Your roll (" << die1 << " + " << die2 << " = "<< sum << endl; 
            
            if (sum == 7 or sum == 11)
            {
                cout << "You won" << endl;
                break;
            }
            else if (point == 2  or point == 3 or point == 11)
            {
                cout << "You loose" << endl;
                break;
            }
            else if (sum == point)
            {
                cout << "You won" << endl;
                break;
            }
        }
        if (sum > 11)
            cout << "You loose" << endl;
        cout << "End of the game" << endl;
    }
    
    return 0;
}

int die()
{
    return 1 + (rand() % 6); // -> [1,6] 
}
