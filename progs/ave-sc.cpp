#include <iostream>

using namespace std;

int main()
{
    int faceLength;

    cout << "Enter face length:";
    cin >> faceLength;

    while (faceLength >= 0)
    {
        int area = faceLength*faceLength;
        int volume = area*faceLength;
        cout << "Face=" << faceLength <<", Area=" << area <<", Volume=" << volume << endl;

        cout << "Enter face length:";
        cin >> faceLength;
    }

    return 0;
}