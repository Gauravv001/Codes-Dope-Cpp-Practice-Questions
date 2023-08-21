// Take input of age of 3 people by user and determine oldest and youngest among them.

#include <iostream>
using namespace std;

int main()
{
    const int numPeople = 3;
    int ages[numPeople];

    // Get input for the ages of three people
    for (int i = 0; i < numPeople; ++i)
    {
        cout << "Enter the age of person " << i + 1 << ": ";
        cin >> ages[i];
    }

    // Determine the oldest and youngest
    int oldest = ages[0];
    int youngest = ages[0];

    for (int i = 1; i < numPeople; ++i)
    {
        if (ages[i] > oldest)
        {
            oldest = ages[i];
        }

        if (ages[i] < youngest)
        {
            youngest = ages[i];
        }
    }

    // Print the results
    cout << "Oldest person's age: " << oldest << endl;
    cout << "Youngest person's age: " << youngest << endl;

    return 0;
}
