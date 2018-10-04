#include <iostream>

using namespace std;

int main()
{
    int faceLength = 1;

    cout << "Face length\tSurface area\tVolume\n";

    while (faceLength <= 10)
    {
        int area = faceLength*faceLength;
        int volume = area*faceLength;
        cout << faceLength <<"\t\t" << area <<"\t\t" << volume << endl;
        faceLength += 1;
    }
    return 0;
}