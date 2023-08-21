// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

void startPattern(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    startPattern(n);
    return 0;
}