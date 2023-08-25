// A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.

#include <iostream>
using namespace std;

void elligibleOrNot(float userAge)
{
    string result = (userAge >= 18) ? " elligible " : " Not elligible ";

    cout << "user is" << result << "for voting.";
    // if (userAge >= 18)
    //     cout << "User is elligible for voting." << endl;
    // else
    //     cout << "User is Not elligible for voting." << endl;
}

int main()
{
    float age;
    cout << "Enter the age: "
         << " " << endl;
    cin >> age;

    elligibleOrNot(age);
    return 0;
}