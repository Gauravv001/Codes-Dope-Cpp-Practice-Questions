// Take as input a fraction in the form a/b. Convert the same into lowest terms and print. (Lowest terms examples 3/12 = 1/4).

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void lowestTerms(int numernator, int denominator)
{
    int d;
    d = __gcd(numernator, denominator);

    numernator = numernator / d;
    denominator = denominator / d;

    cout << numernator << "/" << denominator << endl;
}

int main()
{
    int nume, deno;
    cout << "Enter the value of Numernator:" << endl;
    cin >> nume;
    cout << "Enter the value of Denominator:" << endl;
    cin >> deno;

    cout << nume << "/" << deno << endl;

    lowestTerms(nume, deno);
    return 0;
}