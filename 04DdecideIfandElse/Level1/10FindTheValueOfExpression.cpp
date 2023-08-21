// If
// x = 2
// y = 5
// z = 0
// then find values of the following expressions:
// a. x == 2
// b. x != 5
// c. x != 5 && y >= 5
// d. z != 0 || x == 2
// e. !(y < 10)

#include <iostream>
using namespace std;
int main()
{
    int x = 2, y = 5, z = 0;
    cout << (x == 2) << endl;           // True
    cout << (x != 5) << endl;           // True
    cout << (x != 5 && y >= 5) << endl; // True
    cout << (z != 0 || x == 2) << endl; // True
    cout << !(y < 10) << endl;          // False

    return 0;
}