/*Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables. E.g.-If entered value of x is 5 and y is 10 then
cout <<x << " and " << y
should print 10 and 5. */

#include <iostream>
using namespace std;
int main()
{
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    cout << firstNumber << " " << secondNumber << endl;

    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << firstNumber << " " << secondNumber << endl;
    return 0;
}