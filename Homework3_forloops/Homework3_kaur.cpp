/*
Anterpreet kaur
Homework 3 - for loop
Program 1&2
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int positive = 0, negative = 0, zero = 0;

    // Ask the user to enter 10 numbers
    cout << "Enter 10 numbers:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Number " << i << ": ";
        cin >> number;

        if (number > 0) {
            positive++;
        } 
        else if (number < 0) {
            negative++;
        } 
        else {
            zero++;
        }
    }

    // Display results
    cout << "\nTotal positive numbers = " << positive << endl;
    cout << "Total negative numbers = " << negative << endl;
    cout << "Total zeros = " << zero << endl;


    cout << "----- Program 2 -----" << endl;
    int days;
    double sales, totalSales = 0.0, averageSales;

    cout << "Enter the number of days: ";
    cin >> days;

    // Loop to enter sales for each day
    for (int i = 1; i <= days; i++) {
        cout << "Enter sales for day " << i << ": $";
        cin >> sales;
        totalSales += sales;  // accumulate total sales
    }

    // Calculate average
    averageSales = totalSales / days;

    // Display results
    cout << "\nTotal sales $" << totalSales << " for " << days << " days. ";
    cout << "Average daily sales $" << averageSales << endl;

    return 0;
}