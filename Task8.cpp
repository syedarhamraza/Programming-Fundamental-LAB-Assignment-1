//Task 8: Tough Scenario Budget Calculator for a Small Business 
#include <iostream>
using namespace std;

int main() {
    int Rent = 1500;
    int EmpSalary = 3000;
    int Utilities = 400;
    int OtherExpenses = 300;
    int Revenue = 10000;

    int totalMonthlyExpenses = Rent + EmpSalary + Utilities + OtherExpenses;
    int remainingProfit = Revenue - totalMonthlyExpenses;
    int yearlySavings = remainingProfit * 12;

    cout << "Total MOnthly Expenses: $" << totalMonthlyExpenses << endl;
    cout << "Remaining Profit: $" << remainingProfit << endl;
    cout << "Yearly Savings: $" << yearlySavings << endl;

    return 0;
}