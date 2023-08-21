// If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), write a program to calculate his total marks and percentage marks.

#include <iostream>
using namespace std;
int main()
{
    int MarksInFirstSubject = 78;
    int MarksInSecondSubject = 45;
    int MarksInThirdSubject = 62;

    float totalMarks = MarksInFirstSubject + MarksInSecondSubject + MarksInThirdSubject;
    float percentageMarks = (totalMarks / 300)*100;

    cout << totalMarks << " " << percentageMarks << endl;
    return 0;
}