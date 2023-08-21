/*   
   *   
  ***  
 *****
*******
*******
 *****
  ***
   *
*/


#include <iostream>
using namespace std;

void kiteStarPattern(int n)
{

    // for rows --> 1 to n

    for (int i = 1; i <= n; i++)
    {

        // For spaces --> 1 to n - rowNo.
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // For stars k = 1---> 2*rowNo. - 1
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // For reverse side
    for (int i = n; i >= 1; i--)
    {

        // For spaces --> 1 to n - rowNo.
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // For stars k = 1---> 2*rowNo. - 1
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int userInput;
    cout << "Enter the value:"
         << " ";
    cin >> userInput;

    kiteStarPattern(userInput);
    return 0;
}