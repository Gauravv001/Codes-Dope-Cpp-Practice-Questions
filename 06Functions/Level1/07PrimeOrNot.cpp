#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false; // Found a divisor, not a prime
        }
    }

    return true; // No divisors found, number is prime
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}