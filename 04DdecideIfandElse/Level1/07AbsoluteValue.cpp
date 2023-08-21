
/* Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1 */

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the vakue of x:" << endl;
    cin >> x;

    if (x < 0)
    {
        x *= (-1);
        cout << "absolute value of x is:" << x << endl;
    }
    else
    {
        cout << "absolute value of x is:" << x << endl;
    }

    return 0;
}