// Write a program to find the sum of the even and odd digits of the number which is given as input.

#include <iostream>
using namespace std;

void sumOfDigits(int num)
{
    int sumOfEvenDigits = 0;
    int sumOfOddDigits = 0;
    while (num > 0)
    {
        int digit = num % 10;

        if (digit % 2 == 0)
        {
            sumOfEvenDigits += digit;
        }
        else
        {
            sumOfOddDigits += digit;
        }
        num /= 10;
    }
    cout << sumOfEvenDigits << " ";
    cout << sumOfOddDigits << " ";
}

int main()
{
    int userInputNumber;
    cout << "Enter a number: ";
    cin >> userInputNumber;

    sumOfDigits(userInputNumber);

    return 0;
}