/* A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.  */

#include <iostream>
using namespace std;

void gradeToMarks(double marks)
{
    // marks > 80 --> 'A'
    if (marks > 80)
        cout << "Students has secured a grade A" << endl;
    // 60<=marks<=80 --> 'B'
    else if (60 <= marks && marks <= 80)
        cout << "Students has secured a grade B" << endl;
    // 50<=marks<=60 --> 'C'
    else if (50 <= marks && marks <= 60)
        cout << "Students has secured a grade C" << endl;
    // 45<=marks<=50 --> 'D'
    else if (45 <= marks && marks <= 50)
        cout << "Students has secured a grade D" << endl;
    // 25<=marks<=45 --> 'E'
    else if (25 <= marks && marks <= 45)
        cout << "Students has secured a grade E" << endl;
    // below 25 --> 'F'
    else
        cout << "Students has secured a grade F" << endl;
}

int main()
{
    double marksOfStudent;
    cout << "Enter the marks to known your corresponding grade:" << endl;
    cin >> marksOfStudent;

    gradeToMarks(marksOfStudent);
    return 0;
}