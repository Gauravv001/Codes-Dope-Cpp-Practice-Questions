/* A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask user for quantity Suppose, one unit will cost 100.
Judge and print total cost for user. */

// price - (price * .1) -->10% discount.

#include <iostream>
using namespace std;
int main()
{
    int userQuantity, price;
    cout << "enter the quantity:" << endl;
    cin >> userQuantity;

    price = userQuantity * 100;

    if (price > 1000)
    {
        cout << "Total cost is:" << price - (price * .1) << endl;
    }
    else
    {
        cout << "Total cost is:" << price << endl;
    }
    return 0;
}