// Write a program to reverse a 3-digit number. E.g.-
// Number : 132
// Output : 231

// Write a program to calculate the sum of the digits of a 3-digit number.
//  Number : 132
//  Output : 6

#include <iostream>
using namespace std;

void ReverseThreeDigits(int num)
{
    if (num < 100 || num > 999)
    {
        cout << "error!!" << endl;
        return;
    }

    int firstDigit = num / 100;
    int secondDigit = (num / 10) % 10;
    int thirdDigit = num % 10;

    int temp = firstDigit;
    firstDigit = thirdDigit;
    thirdDigit = temp;

    int displayNum = firstDigit * 100 + secondDigit * 10 + thirdDigit * 1;
    cout << displayNum;
}

int main()
{
    int userInput;
    cout << "Enter the number:" << endl;
    cin >> userInput;

    ReverseThreeDigits(userInput);
    return 0;
}