// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

#include <iostream>
using namespace std;

void circumferenceAndAreaOfTheCircle(float r)
{
    // circumference of circle = 2*3.14*r
    float circumference = 2 * 3.14 * r;
    cout << "Circumference of the given circle: " << circumference << endl;

    // area of circle = r*r
    float area = r * r;
    cout << "Area of the given circle: " << area << endl;
}

int main()
{
    float radius;
    cout << "Enter the value of radius: "
         << " ";
    cin >> radius;

    circumferenceAndAreaOfTheCircle(radius);
    return 0;
}