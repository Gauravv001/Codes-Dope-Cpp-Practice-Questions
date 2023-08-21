#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number:"
         << " ";
    cin >> number;

    int sum = 0;

    while (number > 0)
    {
        
        sum = sum + number % 10;
        number = number / 10;
    }

    cout << sum;
    return 0;
}