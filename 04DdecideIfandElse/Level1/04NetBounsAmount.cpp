// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include <iostream>
using namespace std;

void BounsGivenOrNot(double sal, double yos)
{
    if (yos > 5)
    {
        cout << "Bouns is given to the employee:" << sal + (sal * 0.05) << endl;
    }
    else
    {
        cout << "Bouns is Not given to the employee:" << sal << endl;
    }
}

int main()
{
    double salary, yearOfService;
    cout << "enter the salary amount:" << endl;
    cin >> salary;
    cout << "enter the year Of service:" << endl;
    cin >> yearOfService;

    BounsGivenOrNot(salary, yearOfService);
    return 0;
}