// A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
// E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
// Write all Armstrong numbers between 100 to 500.

// C++ program to find all Armstrong numbers
// in a given range
#include <bits/stdc++.h>
using namespace std;

void isArmstrong(int left, int right)
{
	for (int i = left; i <= right; i++) {
		int sum = 0;
		int temp = i;
		while (temp > 0) {
			// Finding the lastdigit
			int lastdigit = temp % 10;

			// Finding the sum
			sum += pow(lastdigit, 3);
			temp /= 10;
		}

		// Condition to print the number if
		// it is armstrong number
		if (sum == i) {
			cout << i << " ";
		}
	}
	cout << endl;
}

// Driver code
int main()
{
	int left = 100, right = 500;
	isArmstrong(left, right);
	return 0;
}


