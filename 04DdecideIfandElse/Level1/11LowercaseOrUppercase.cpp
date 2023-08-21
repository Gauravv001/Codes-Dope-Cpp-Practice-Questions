// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z )./
//  ascii value --> 65 to 90 upperCase
//  ascii value --> 97 to 122 loweCase
#include <iostream>
using namespace std;
int main()
{
    char userInputCharater;
    cout << "Enter the Charater to check:" << endl;
    cin >> userInputCharater;

    if ('A' <= userInputCharater && userInputCharater <= 'Z')
    {
        cout << "character is upperCase." << endl;
    }
    else if ('a' <= userInputCharater && userInputCharater <= 'z')
    {
        cout << "character is lowerCase." << endl;
    }

    return 0;
}