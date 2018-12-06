#include <iostream>
#include <array>

using namespace std;

bool findinarray(array<int, 20> a, int n);
void printarray(array<int, 20> a);

int main()
{
    array<int, 20> numbers;

    int c = 0;
    // enter number in array until we get 20 numbers
    while (c < 20){
        int num;
        cout << "Enter number: ";
        cin >> num;
    
        if (num >= 10 and num <= 100){
            bool found = findinarray(numbers, num);
            if (!found) {
                numbers[c] = num;
                ++c;
                cout << "You entered " << c << " numbers" << endl;
            } else {
                cout << "Number in already in the array" << endl;
            }
        } else {
            cout << "Your number is not in range [10, 100]" << endl;
        }
    }

    printarray(numbers);
}

bool findinarray(array<int, 20> a, int n)
{
    for(int e : a){
        if (e == n)
            return true;
    }
    return false;
}

void printarray(array<int, 20> a)
{
    for (int e : a)
        cout << e << " ";
    cout << endl;
}









