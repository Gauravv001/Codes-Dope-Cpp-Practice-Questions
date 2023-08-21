// Take two int values from user and print greatest among them.

#include <iostream>
using namespace std;

void greatestAmongTwo(int firstNum, int secondNum)
{
    if (firstNum > secondNum)
        cout << "firstNumber is the greatest." << endl;
    else
        cout << "secondNumber is the greatest." << endl;
}

int main()
{
    int firstNumber, secondNumber;
    cout << "enter the value of firstNumber:" << endl;
    cin >> firstNumber;
    cout << "enter the value of secondNumber:" << endl;
    cin >> secondNumber;

    greatestAmongTwo(firstNumber, secondNumber);
    return 0;
}