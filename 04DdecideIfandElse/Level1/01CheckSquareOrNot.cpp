// Take values of length and breadth of a rectangle from user and check if it is square or not.

#include <iostream>
using namespace std;

void squareOrNot(float length, float breadth)
{
    /*
    how to check wheather a rectangle is a square or not?
    length==breadth ---> yes
    it is a square.
    */

    if (length == breadth)
    {
        cout << "yess! It is also a square." << endl;
    }
    else
    {
        cout << "nope! It is only a rectangle." << endl;
    }
}

int main()
{
    float userLength, userBreadth;
    cin >> userLength >> userBreadth;

    squareOrNot(userLength, userBreadth);
    return 0;
}