#include <iostream>

using namespace std;

int main()
{
    cout << "Face length\tSurface area\tVolume" << endl;

    for(int faceLength = 1; faceLength <= 10; ++faceLength)
    {
        int area = faceLength*faceLength;
        int volume = area*faceLength;
        cout << faceLength <<"\t\t" << area <<"\t\t" << volume << endl;
    }
    return 0;
}