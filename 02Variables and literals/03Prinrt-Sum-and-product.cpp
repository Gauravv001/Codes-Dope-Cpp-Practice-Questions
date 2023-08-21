
// Write a C++ program to take two integer inputs from user and print sum and product of them.

#include <iostream>
using namespace std;
int main()
{
    int Num_1, Num_2;
    cin >> Num_1 >> Num_2;
    cout << "Num_1 : " << Num_1 << "and"
         << "Num_2 :" << Num_2 << endl;

    cout << "sum of Num_1 and Num_2 is " << Num_1 + Num_2 << endl;

    cout << "product of Num_1 and Num_2 is " << Num_1 * Num_2 << endl;

    return 0;
}