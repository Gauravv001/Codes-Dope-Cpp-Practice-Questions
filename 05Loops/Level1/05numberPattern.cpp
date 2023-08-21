// 1010101
//  10101
//   101
//    1

#include <iostream>
using namespace std;

void pyradmidPattern(int n)
{
    int i, j, k;
    for (i = n; i >= 1; i--)
    {
        // spaces
        for (j = n; j >= i; j--)
        {
            cout << " ";
        }
        // stars
        for (k = 1; k <= 2 * i - 1; k++)
        {
            cout <<k%2;
        }
        cout << endl;
    }
}

int main()
{
    int userInput;
    cout << "Enter a number:"
         << " ";
    cin >> userInput;

    pyradmidPattern(userInput);
    return 0;
}