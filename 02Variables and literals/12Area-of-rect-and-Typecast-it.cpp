#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cin >> length >> breadth;

    cout << "length is: " << length << "breadth is: " << breadth << endl;

    float areaOfRectangle = length * breadth;
    cout << "areaOfRectangle is : " << areaOfRectangle << endl;

      cout << "After typecast the areaOfRectangle is : " << int(areaOfRectangle) << endl;
    return 0;
}