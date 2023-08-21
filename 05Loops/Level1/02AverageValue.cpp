#include <iostream>
using namespace std;

int main() {
    int num_values;
    cout << "Enter the number of integers you want to average: ";
    cin >> num_values;

    // Initialize variables
    int total = 0;
    int num;

    // Take integers from the user and calculate the total
    for (int i = 0; i < num_values; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> num;
        total += num;
    }

    // Calculate and print the average
    double average = static_cast<double>(total) / num_values;
    cout << "The average of the " << num_values << " integers is: " << average << endl;

    return 0;
}
