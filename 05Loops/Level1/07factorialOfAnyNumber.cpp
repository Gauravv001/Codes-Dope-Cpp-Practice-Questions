// Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
// 4! = 1*2*3*4 = 24
// 3! = 3*2*1 = 6
// 2! = 2*1 = 2
// Also,
// 1! = 1
// 0! = 1
// Write a C++ program to calculate factorial of a number.

#include <iostream>
using namespace std;

void fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << factorial << " ";
}

int main()
{
    int number;
    cout << "Enter the number:"
         << " ";
    cin >> number;

    fact(number);
    return 0;
}