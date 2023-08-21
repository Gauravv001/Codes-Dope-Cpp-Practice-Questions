/*Length and breadth of a rectangle are 5 and 7 respectively. write a program to calculate the area and perimeter of the rectangle.*/

#include <iostream>
using namespace std;
int main()
{
    int length = 5;
    int breadth = 7;

    int perimeter = 2 * (length + breadth);
    int area = length * breadth;

    cout << "perimeter of a rectangle:" << perimeter << " "
         << "area of a rectangle:" << area << endl;
    return 0;
}
