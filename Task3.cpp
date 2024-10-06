//Task 3: Simple Mathematical Operations 
#include <iostream>
using namespace std;

int main() {
    float num_1 = 20;
    float num_2 = 45;
    int addition = num_1 + num_2;
    int subtraction = num_1 - num_2;
    int multiplication = num_1 * num_2;
    float division = num_1 / num_2;

    cout << "The sum of the number is: " << addition << endl;
    cout << "The subtraction of the number is: " << subtraction << endl;
    cout << "The product of the number is: " << multiplication << endl;
    cout << "The division of the number is: " << division << endl;

    return 0;
}