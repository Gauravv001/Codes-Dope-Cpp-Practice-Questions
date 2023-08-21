/*Take a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the number TAKEN.
For example, if the number which was taken is 5696, then the displayed number should be 7818.
*/
#include <iostream>
using namespace std;

int addingTwoToThefourDigitNumber(int num)
{
    // check wheather the number you have received is a four digit number or not.

    if (num < 1000 || num > 9999)
    {
        cout << "Error: please enter the number correctly." << endl;
        return -1;
    }

    int firstDigit = (num / 1000 + 2) % 10;

    int seconndDigit = ((num / 100) % 10 + 2) % 10;

    int thirdDigit = ((num / 10) % 10 + 2) % 10;

    int fourthDigit = (num % 10 + 2) % 10;

    int displayNum = firstDigit * 1000 + seconndDigit * 100 + thirdDigit * 10 + fourthDigit;
    return displayNum;
}

int main()
{
    int number;
    cout << "Enter a Four-digit integer:" << endl;
    cin >> number;

    int resAfterAddingTwo = addingTwoToThefourDigitNumber(number);

    cout << "output after adding 2 to the corressponding digits:" << resAfterAddingTwo << endl;
    return 0;
}
