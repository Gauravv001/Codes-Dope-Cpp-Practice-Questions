// Take input of some length in meter and covert it to feet and inches.


#include <iostream>
using namespace std;
int main()
{
    float valueInMeter;
    cout << "enter the value in meter:" << endl;
    cin >> valueInMeter;

    // 1 meter = 39.37inch. 1 meter = 3.281feet.

    // inch = 39.37 * meter (m)
    //  feet = 3.281 * meter (m)

    cout << "value in Feet: " << (3.281 * valueInMeter) << endl;
    cout << "value in Inches: " << (39.37 * valueInMeter) << endl;

    return 0;
}