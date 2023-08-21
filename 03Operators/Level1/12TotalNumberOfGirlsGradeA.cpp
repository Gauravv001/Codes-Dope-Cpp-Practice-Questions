// The total number of students in a class are 45 out of which 25 are boys. If 80% of the total students secured grade 'A' out of which 17 are boys, then write a program to calculate the total number of girls getting grade 'A'.

// total students --> 45
// out of 45 --> 25 boys
// girls --> 45 - 25 --> 15
// 80% of total students --> grade 'A' --> out of which 17 --> boys
// total number of girls getting --> grad 'A' ?

#include <iostream>
using namespace std;
int main()
{
    int totalStudents = 45, boys = 25, Girls = totalStudents - boys;
    int boysGettingGradeA = 17;

    // total students getting grade A
    int total = (80 * totalStudents) / 100;

    // girls getting grade A
    int girlsGettingGradeA = total - boysGettingGradeA;

    cout << girlsGettingGradeA << endl;

    return 0;
}
