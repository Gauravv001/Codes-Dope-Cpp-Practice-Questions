// Write a program to convert Fahrenheit into Celsius.
// °C = 5/9(°F – 32).

#include <iostream>
using namespace std;
int main()
{
    float tempInFahrenheit;
    cout << "Enter the temperature in Fahrenheit: " << endl;
    cin >> tempInFahrenheit;

    float tempInCelsius = (tempInFahrenheit - 32.0) * 5.0 / 9.0;
    cout << "Enter the temperature in Celsius: " << tempInCelsius << endl;
    return 0;
}