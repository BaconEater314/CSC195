// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main(){
    string name;
    char initial;
    short age;
    bool isAdult;
    unsigned int zipcode;
    float wage = 0;
    short daysWorked;
    float hoursWorkedPerDay[7];
    const float TAX = 0.1f;

    cout << "Enter first name: ";
    cin >> name;

    cout << "Enter first letter of your last name: ";
    cin >> initial;

    cout << "Enter age: ";
    cin >> age;
    isAdult = (age >= 18);

    cout << "Enter zip code: ";
    cin >> zipcode;

    cout << "Enter hourly wage: ";
    cin >> wage;

    cout << "Enter number of days worked (max 7): ";
    cin >> daysWorked;

    float totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked for " << i+1 << ": ";
        cin >> hoursWorkedPerDay[i];

        totalHours += hoursWorkedPerDay[i];
    }

    float grossIncome = totalHours * wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;

    cout << "\nEmployee Payroll Summary\n";
    cout << "-------------------------\n";
    cout << "Name: " << name << " " << initial << ".\n";
    cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    cout << "Zipcode: " << zipcode << "\n";
    cout << "Hourly Wage: $" << wage << " per hour\n";
    cout << "Total Hours Worked: " << totalHours << " hours\n";
    cout << "Gross Income: $" << grossIncome << "\n";
    cout << "Tax Amount: $" << taxAmount << "\n";
    cout << "Net Income: $" << netIncome << "\n";
}
