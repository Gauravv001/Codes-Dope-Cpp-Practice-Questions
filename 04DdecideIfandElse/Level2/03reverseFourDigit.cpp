// A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
// INPUT : 1234        OUTPUT : 4321
// INPUT : 5982        OUTPUT : 2895

#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    if (num < 1000 || num > 9999)
    {
        cout << "Error: please enter the number correctly." << endl;
        return -1;
    }

    int firstDigit = (num / 1000);

    int seconndDigit = ((num / 100) % 10);

    int thirdDigit = ((num / 10) % 10);

    int fourthDigit = (num % 10);

    int temp = firstDigit;
    firstDigit = fourthDigit;
    fourthDigit = temp;

    int temp_1 = seconndDigit;
    seconndDigit = thirdDigit;
    thirdDigit = temp_1;

    int displayNum = firstDigit * 1000 + seconndDigit * 100 + thirdDigit * 10 + fourthDigit;
    return displayNum;
}

int main()
{
    int number;
    cout << "Enter a four digit number";
    cin >> number;

    int resNumber = reverseNumber(number);
    cout << "after Reverse:" << resNumber;
    return 0;
}