// Take two integer inputs from user. First calculate the sum of two then product of two. Finally, print the sum and product of both obtained results.

#include <iostream>
using namespace std;
int main()
{
    int firstNum, secondNum;
    cin >> firstNum >> secondNum;
    cout << "firstNum is: " << firstNum << "\tand"
         << "secondNum is: " << secondNum << endl;

    int sum = firstNum + secondNum;
    int product = firstNum * secondNum;

    cout << "sum is :" << sum << endl;
    cout << "product is :" << product << endl;

    cout << "sum + product is :" << sum + product << endl;
    cout << "sum * product is :" << sum * product << endl;

    return 0;
}