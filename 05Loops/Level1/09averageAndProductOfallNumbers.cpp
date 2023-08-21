// Take integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ). Print average and product of all numbers.

#include <iostream>
#include <sstream> // for string manipulation
using namespace std;

int main() {
    int sum = 0;
    int product = 1;
    int count = 0;
    string input;

    cout << "Enter integers (press 'q' to quit):" << endl;

    while (true) {
        cout << "Enter an integer: ";
        cin >> input;

        if (input == "q" || input == "Q") {
            break;
        }

        int num;
        stringstream ss(input);
        
        // Check if the input is a valid integer
        if (ss >> num) {
            sum += num;
            product *= num;
            count++;
        } else {
            cout << "Invalid input. Please enter an integer or 'q' to quit." << endl;
        }
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Average: " << average << endl;
        cout << "Product: " << product << endl;
    } else {
        cout << "No valid input provided." << endl;
    }

    return 0;
}
