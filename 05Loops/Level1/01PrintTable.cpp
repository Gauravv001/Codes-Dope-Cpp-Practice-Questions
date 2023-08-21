// Print multiplication table of 24, 50 and 29 using loop.
#include <iostream>
using namespace std;

void tableOfAnyNumber(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " "
             << "x"
             << " " << i << "=" << (num * i) << endl;
    }
}

int main()
{
    int number;
    cout << "Enter the number:" << endl;
    cin >> number;

    tableOfAnyNumber(number);
    return 0;
}