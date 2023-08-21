// Write a program to calculate the sum of the digits of a 3-digit number.
//  Number : 132
//  Output : 6

#include <iostream>
using namespace std;

int sumOfAllThreeDigits(int num)
{
    if (num < 100 || num > 999)
    {
        cout << "error!!" << endl;
        return -1;
    }

    int firstDigit = num / 100;
    int secondDigit = (num / 10) % 10;
    int thirdDigit = num % 10;

    int sum = firstDigit + secondDigit + thirdDigit;

    return sum;
}

int main()
{
    int userInput;
    cout << "Enter the number:" << endl;
    cin >> userInput;

    int resSum = sumOfAllThreeDigits(userInput);

    if (resSum != -1)
    {
        cout << userInput << ":" << (userInput / 100) << "+" << (userInput / 10) % 10 << "+" << (userInput % 10) << "=" << resSum << endl;
    }

    return 0;
}