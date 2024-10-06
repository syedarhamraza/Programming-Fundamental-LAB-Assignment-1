//Task 7: Simple Temperature Conversion Application 

#include <iostream>
using namespace std;

int main() {

    float celsius = 25;
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Celsuis: " << celsius << "C" << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;

    float fahrenheit_1 = 100;
    float celsius_1 = (fahrenheit_1 - 32) * 5 / 9;
    cout << "Temperature in Fahrenheit: " << fahrenheit_1 << "F" << endl;
    cout << "Temperature in Celsuis: " << celsius_1 << "C" << endl;

 return 0;

}
