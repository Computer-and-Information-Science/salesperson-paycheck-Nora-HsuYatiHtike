// Hsu Yati Htike
// Salesperson's Paycheck

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string firstName, lastName;
    double baseSalary, commissionPercent, totalSales, expenses;
    double commissionAmount, totalPay;
    string fileName;

    // Ask for file name
    cout << "Enter the name of the input file: ";
    cin >> fileName;

    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Could not open file." << endl;
        return 1;
    }

    // Read data from file
    inFile >> firstName >> lastName;
    inFile >> baseSalary >> commissionPercent;
    inFile >> totalSales;
    inFile >> expenses;

    inFile.close();

    // Do calculations
    commissionAmount = (commissionPercent / 100.0) * totalSales;
    totalPay = baseSalary + commissionAmount - expenses;

    // Show results
    cout << "Payroll data for " << firstName << " " << lastName << endl;
    cout << endl;
    cout << "Base Salary: " << baseSalary << endl;
    cout << "Commission: " << commissionAmount << " (" << commissionPercent 
         << "% of " << totalSales << ")" << endl;
    cout << "Expenses: " << expenses << endl;
    cout << "Total: " << totalPay << endl;

    return 0;
}
