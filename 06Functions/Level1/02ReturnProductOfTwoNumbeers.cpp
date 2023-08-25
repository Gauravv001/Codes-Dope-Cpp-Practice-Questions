// Define a function that returns the product of two numbers entered by user.

#include <iostream>
using namespace std;

int productOfTwoNumbers(int number1, int number2)
{
    return (number1 * number2);
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

    cout << "Product of two numbers that you have entered is : " << productOfTwoNumbers(num1, num2) << endl;

    return 0;
}