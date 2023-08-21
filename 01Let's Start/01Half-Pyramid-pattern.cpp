/*
Ques: Write a C++ program to print
*
**
***
****
on screen. */

// This is a very Naive approach to do this.
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"*"<<endl;
//     cout<<"**"<<endl;
//     cout<<"***"<<endl;
//     cout<<"****"<<endl;
// return 0;
// }

// By using loops. In which user give us the input

#include <iostream>
using namespace std;
int main()
{
    // User input
    int rows, cols, n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for (rows = 1; rows <= n; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// time complexity O(n^2)
// space complexity O(1)