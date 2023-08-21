#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a 4 digit number:" << endl;
    cin >> num;
    cout << "Number that you have entered:" << num << endl;

    int res = num + 8;
    res *= 5;
    cout << res << endl;

    return 0;
}