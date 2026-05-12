// This program converts Fahrenheit to Celsius and checks if the temperature is above freezing using logical operators.

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << endl;

    // Using logical operator to check if temperature is above freezing point
    if (celsius > 0 && fahrenheit > 32) {
        cout << "The temperature is above freezing point in both scales." << endl;
    } else if (celsius <= 0 && fahrenheit <= 32) {
        cout << "The temperature is at or below freezing point in both scales." << endl;
    } else {
        cout << "The temperature is above freezing in one scale and below in the other." << endl;
    }
    return 0;
  }