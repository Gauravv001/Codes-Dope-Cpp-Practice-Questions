
// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include <iostream>
using namespace std;

void allowedInExamOrNot(int totalclasses, int classAttended)
{
    float percentageOfClassAttended = (float)(classAttended * 100) / totalclasses;

    if (percentageOfClassAttended >= 75)
    {
        cout << "Student will allowed to sit in examination." << endl;
    }
    else
    {
        cout << "Student wil NOT allowed to sit in examination." << endl;
    }
}

int main()
{
    int numberOfClassesHeld, numberOfClassesAttended;
    cout << "Enter the total number of classes held:" << endl;
    cin >> numberOfClassesHeld;
    cout << "Enter the no. of classes attended by you:" << endl;
    cin >> numberOfClassesAttended;

    allowedInExamOrNot(numberOfClassesHeld, numberOfClassesAttended);
    return 0;
}