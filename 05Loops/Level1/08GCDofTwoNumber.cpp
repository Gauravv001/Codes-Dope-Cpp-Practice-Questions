/*
Note: GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them.
*/

//Time Complexity: O(min(a,b)) 
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int gcdOfTwoNumbers(int a, int b)
{
    int res = min(a, b);

    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int main()
{
    // Taking two varibles to store the two numbers.
    int num1, num2;

    // taking input of num1 from the user side
    cout << "Enter the value of num1:"
         << " ";
    cin >> num1;

    // taking input of num2 from the user side
    cout << "Enter the value of num1:"
         << " ";
    cin >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is "
         << gcdOfTwoNumbers(num1, num2);
    return 0;
}
