// Write a program to print the factorial of a number by defining a function named 'Factorial

#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    if (num == 1 || num == 0)
    {
        return fact;
    }

        for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int userNumber;
    cout << "Enter the number: " << endl;
    cin >> userNumber;

    cout << "Factorial of the given number is: " << factorial(userNumber) << endl;

    return 0;
}