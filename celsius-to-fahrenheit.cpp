#include <iostream>
#include <string>
using namespace std;

float converter(float celsius) {
    float fahrenheit = (celsius * 9 /5 + 32);
    return fahrenheit;
}

int main() {
    float celsius;
    cout << "Enter temperature in Celsius to convert to Fahrenheit --> ";
    cin >> celsius;

    float fahrenheit = converter(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}