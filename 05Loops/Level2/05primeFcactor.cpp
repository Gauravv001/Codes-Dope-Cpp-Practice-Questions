// Write a program to find prime factor of a number.
// If a factor of a number is prime number then it is its prime factor.
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void primeFactors(int num)
{
    cout << "Prime factors of " << num << ": ";

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && isPrime(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    primeFactors(num);

    return 0;
}
