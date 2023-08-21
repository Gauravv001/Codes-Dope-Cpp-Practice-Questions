//Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.

#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "Enter the value of Radius:";
    cin >> radius;

    float perimeterOfCircle = 2 * 3.14 * radius;
    float areaOfCircle = 3.14 * radius * radius;

    cout << "perimeter of circle is :" << perimeterOfCircle << endl;

    cout << "area of circle is:" << areaOfCircle << endl;

    return 0;
}