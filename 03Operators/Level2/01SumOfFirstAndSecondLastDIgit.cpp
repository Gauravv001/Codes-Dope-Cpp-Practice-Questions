    // cout<<123/10<<endl;  // gives you the remaning digits expect last digit.
    // cout<<123%10<<endl; // gives you the last digit.

// Write a program to calculate the sum of the first and the second last digit of a 5 digit.
// E.g.- NUMBER : 12345
// OUTPUT : 1+4=5

#include <iostream>
using namespace std;

int sumFirstAndSecondLastDigit(int number) {
    if (number < 10000 || number > 99999) {
        cout << "Error: Please enter a 5-digit number." << endl;
        return -1;
    }

    int firstDigit = number / 10000;
    int secondLastDigit = (number / 10) % 10;

    int result = firstDigit + secondLastDigit;
    return result;
}

int main() {
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;

    int sum = sumFirstAndSecondLastDigit(number);

    if (sum != -1) {
        cout << number << ": " << number / 10000 << " + " << (number / 10) % 10 << " = " << sum << endl;
    }

    return 0;
}
