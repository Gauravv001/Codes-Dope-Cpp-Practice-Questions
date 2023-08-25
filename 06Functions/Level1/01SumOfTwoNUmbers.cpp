// Write a program to print the sum of two numbers entered by user by defining your own function.


#include <iostream>
using namespace std;

int sumOfTwoNumbers(int number1, int number2)
{
    return (number1 + number2);
}

int main()
{
    int num1, num2;
    cout << "Enter the first number :"
         << " ";
    cin >> num1;
    cout << "Enter the second number :"
         << " ";
    cin >> num2;

    cout << "Sum of two numbers that you have entered is : " << sumOfTwoNumbers(num1, num2) << endl;

    return 0;
}