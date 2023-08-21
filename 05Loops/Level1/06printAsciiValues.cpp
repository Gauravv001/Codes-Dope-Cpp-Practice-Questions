// Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    for (int i = 0; i <= 255; i++)
    {
        ch = i;
        cout << ch << "\n";
    }

    return 0;
}