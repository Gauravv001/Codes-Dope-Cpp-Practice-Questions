// Enter two numbers from keyboard. Write a program to check if the two numbers are equal.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter the value of num1:" << endl;
    cin >> num1;
    cout << "enter the value of num2:" << endl;
    cin >> num2;

    if (num1 == num2)
    {
        cout << "Both the numbers are Equal" << endl;
    }
    else
    {
        cout << "Both the numbers are notEqual" << endl;
    }

    return 0;
}