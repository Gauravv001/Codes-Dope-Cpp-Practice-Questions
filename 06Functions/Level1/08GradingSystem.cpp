/* Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail */

#include <iostream>
using namespace std;

void grading(float marks)
{
    if (marks >= 91 && marks <= 100)
        cout << "AA" << endl;
    else if (marks >= 81 && marks <= 90)
        cout << "AB" << endl;
    else if (marks >= 71 && marks <= 80)
        cout << "BB" << endl;
    else if (marks >= 61 && marks <= 70)
        cout << "BC" << endl;
    else if (marks >= 51 && marks <= 60)
        cout << "CD" << endl;
    else if (marks >= 41 && marks <= 50)
        cout << "DD" << endl;
    else
        cout << "FAIL" << endl;
}

int main()
{
    float userMarks;
    cout << "Enter your marks to know your grade: "
         << " ";
    cin >> userMarks;

    grading(userMarks);
    return 0;
}