#include <iostream>
using namespace std;


double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main() {
    double temperature;
    char scale;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter scale (C for Celsius, F for Fahrenheit): ";
    cin >> scale;

    if (scale == 'C' || scale == 'c') {
        double convertedTemp = celsiusToFahrenheit(temperature);
        cout << "Converted temperature: " << convertedTemp << " F" << endl;
    }
    else if (scale == 'F' || scale == 'f') {
        double convertedTemp = fahrenheitToCelsius(temperature);
        cout << "Converted temperature: " << convertedTemp << " C" << endl;
    }
    else {
        cout << "Invalid scale. Please try again."<< endl;
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
