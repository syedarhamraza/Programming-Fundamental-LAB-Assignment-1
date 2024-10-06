//Task 6: Salary Calculator  
#include <iostream>
using namespace std;

int main() {
    float monthlySalary = 4000;
    float annualSalary = monthlySalary * 12;
    float taxCalculation = 1 - 0.1;
    float monthlySalaryAfterTax = monthlySalary * taxCalculation;
    float annualSalaryAfterTax = monthlySalaryAfterTax * 12;

    cout << "Monthly Salary: $" << monthlySalary << endl;
    cout << "Monthly Salary after Tax: $" << monthlySalaryAfterTax << endl;
    cout << "Annual Salary before Tax: $" << annualSalary << endl;
    cout << "Annual Salary after Tax: $" << annualSalaryAfterTax << endl;

    return 0;
}


