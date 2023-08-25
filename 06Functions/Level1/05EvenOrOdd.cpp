// Define a program to find out whether a given number is even or odd.

#include <iostream>
using namespace std;

void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "Number is even number." << endl;
    }
    else
    {
        cout << "Number is odd number." << endl;
    }
}

int main()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;

    evenOdd(number);
    return 0;
}