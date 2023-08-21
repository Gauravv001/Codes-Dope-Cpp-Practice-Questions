//Now solve the above question to check if atleast one of the conditions 'a < 50' and 'a < b' is true.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a < 50 || a < b)
    {
        cout << "Both the conditions are satisfied" << endl;
    }
    else
    {
        cout << "Not satisfied" << endl;
    }

    return 0;
}