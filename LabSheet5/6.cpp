//Write a program to convert centigrade into Fahrenheit temperature.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
