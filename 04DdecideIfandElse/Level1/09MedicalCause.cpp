// Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

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
            cout<<"attendance is short!!!"<<endl;
        
        char medicalCause;
        cout << "Is there any medical cause??" << endl;
        cin >> medicalCause;
        switch (medicalCause)
        {
        case 'Y':
            cout << "student will allowed to sit." << endl;
            break;

        case 'N':
            cout << "student will NOT allowed to sit." << endl;
        }
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