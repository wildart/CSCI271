#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 10> grades{87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    cout << "Unsorted: ";
    for(int e : grades)
        cout << e << " " ;

    sort(grades.begin(), grades.end());

    cout << "\nSorted: ";
    for(int e : grades)
        cout << e << " " ;

    cout << "\nSearch: ";
    bool found = binary_search(grades.begin(), grades.end(), 78);
    cout << (found ? "78" : "78 not") << " in grades";

    cout << "\nSearch: ";
    found = binary_search(grades.begin(), grades.end(), 1);
    cout << (found ? "1" : "1 not") << " in grades";

    return 0;
}
