/*
 * =====================================================================================
 *
 *       Filename:  hw4.cpp
 *
 *    Description:  Compute area and perimeter of a triangle
 *
 *        Version:  1.0
 *        Created:  12/06/2018 12:16:37 PM
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>

using namespace std;

void semiperimeter(float a, float b, float c, float& s);
void area(float a, float b, float c, float& area);

int main()
{
    char ans = 'y'; // user input for continuation question
    do
    {
        float a, b, c;
        cout << "Enter three sides of a triangle: ";
        cin >> a >> b >> c;

        // check if input is valid
        if (a + b <= c or b + c <= a or c + a <= b){
            cout << "Cannot create triangle with side: " << a << " " << b << " " << c << endl;
            continue; // jump to the beginning of the loop and ask for new entry
        }

        float A, SP;
        semiperimeter(a, b, c, SP);
        area(a, b, c, A);

        cout << "Perimeter is " << 2*SP << endl;
        cout << "Area is " << A << endl;

        
        cout << "Do you want to continue? Y/n";
        cin >> ans;
    }
    while(ans == 'Y' or ans == 'y');

    return 0;
}

void semiperimeter(float a, float b, float c, float& s)
{
    s = (a + b + c) / 2.0;
    return;
}

void area(float a, float b, float c, float& A)
{
    float s;
    semiperimeter(a, b, c, s);
    A = sqrt(s * (s-a)*(s-b)*(s-c));
    return;
}

