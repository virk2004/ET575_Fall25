/* 
Homework 2: Branching
Anterpreet Kaur
Homework:2
September 25th, 2025
*/

#include <iostream>
using namespace std;

int main() {
// ---------------- Program 1: Age eligibility ---------------- //
    int age;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Check for invalid input
    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    }
    // Check for age-based eligibility
    else if (age < 13) {
        cout << "Not eligible for any activities." << endl;
    }
    else if (age >= 13 && age <= 17) {
        cout << "Eligible for youth activities." << endl;
    }
    else if (age >= 18 && age <= 64) {
        cout << "Eligible for adult activities." << endl;
    }
    else { // age >= 65
        cout << "Eligible for senior activities." << endl;
    }

    // ---------------- Program 2: Nested conditional ---------------- //
    int num1, num2, sum;

    // Prompt user for input
    cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Main conditional logic
    if (sum < 0) {
        cout << "False alarm! The sum is " << sum << endl;
    }
    else if (sum >= 1 && sum <= 100) {
        // nested checks
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        }
        else if (sum % 2 == 1) {
            cout << sum << " is an odd guess" << endl;
        }
    }
    else if (sum >= 101 && sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    }
    else if (sum >= 201 && sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    }
    else if (sum >= 1000) {
        // nested
        if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        }
        else if (sum % 2 == 0) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        }
    }

    // ---------------- Program 3: Temperature converter ---------------- //
    int choice;
    double temperature, result;

    // Display the menu
    cout << "\nTemperature Conversion Menu:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Kelvin to Celsius\n";
    cout << "4. Kelvin to Fahrenheit\n";
    cout << "5. Exit\n ";
    cin >> choice;

    return 0;

}
    