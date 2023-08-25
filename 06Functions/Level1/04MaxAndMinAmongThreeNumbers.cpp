// Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.

#include <iostream>
using namespace std;

// Function to find and print the maximum among three numbers
void printMax(int a, int b, int c) {
    int maxNum = max(a, max(b, c));
    cout << "Maximum number: " << maxNum << endl;
}

// Function to find and print the minimum among three numbers
void printMin(int a, int b, int c) {
    int minNum = min(a, min(b, c));
    cout << "Minimum number: " << minNum << endl;
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    printMax(num1, num2, num3);
    printMin(num1, num2, num3);
    
    return 0;
}
