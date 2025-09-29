/* 
Homework 2: Branching
Full Name: Anterpreet Kaur
*/

#include <iostream>
using namespace std;

int main() {
    int option;

    do {
        cout << "\n===== Homework 2 Menu =====\n";
        cout << "1. Age Eligibility\n";
        cout << "2. Nested Conditional\n";
        cout << "3. Temperature Converter\n";
        cout << "4. Exit\n";
        cout << "Select a program (1-4): ";
        cin >> option;

        if (option == 1) {
            // -------- Program 1: Age Eligibility --------
            int age;
            cout << "\n--- Program 1: Age Eligibility ---\n";
            cout << "Enter your age: ";
            cin >> age;

            if (age < 0 || age > 120) {
                cout << "Invalid age. Please enter a valid age." << endl;
            } else if (age < 13) {
                cout << "Not eligible for any activities." << endl;
            } else if (age >= 13 && age <= 17) {
                cout << "Eligible for youth activities." << endl;
            } else if (age >= 18 && age <= 64) {
                cout << "Eligible for adult activities." << endl;
            } else {
                cout << "Eligible for senior activities." << endl;
            }
        }
        else if (option == 2) {
            // -------- Program 2: Nested Conditional --------
            int a, b, sum;
            cout << "\n--- Program 2: Nested Conditional ---\n";
            cout << "Enter two numbers: ";
            cin >> a >> b;
            sum = a + b;

            if (sum < 0) {
                cout << "False alarm! The sum is " << sum << endl;
            } 
            else if (sum >= 1 && sum <= 100) {
                if (sum % 5 == 0) {
                    cout << sum << " is a pentagon" << endl;
                } else if (sum % 2 != 0) {
                    cout << sum << " is an odd guess" << endl;
                } else {
                    cout << "The sum is " << sum << endl;
                }
            } 
            else if (sum >= 101 && sum <= 200) {
                cout << "The new lucky number is " << sum << endl;
            } 
            else if (sum >= 201 && sum <= 999) {
                cout << sum << " is a dreaming number" << endl;
            } 
            else { // 1000+
                if (sum % 2 == 0) {
                    cout << sum << " approaches to the infinite evenly!" << endl;
                }
                if (sum >= 2000) {
                    cout << sum << " approaches to the infinite and beyond!" << endl;
                }
            }
        }
        else if (option == 3) {
            // -------- Program 3: Temperature Converter --------
            int choice;
            double temp, result;

            cout << "\n--- Program 3: Temperature Converter ---\n";
            cout << "1. Celsius to Fahrenheit\n";
            cout << "2. Fahrenheit to Celsius\n";
            cout << "3. Kelvin to Celsius\n";
            cout << "4. Kelvin to Fahrenheit\n";
            cout << "5. Back to Main Menu\n";
            cout << "Choose an option (1-5): ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter Celsius: ";
                cin >> temp;
                result = temp * 9.0/5 + 32;
                cout << temp << " Celsius is equal to " << result << " Fahrenheit" << endl;
            }
            else if (choice == 2) {
                cout << "Enter Fahrenheit: ";
                cin >> temp;
                result = (temp - 32) * 5.0/9;
                cout << temp << " Fahrenheit is equal to " << result << " Celsius" << endl;
            }
            else if (choice == 3) {
                cout << "Enter Kelvin: ";
                cin >> temp;
                result = temp - 273.15;
                cout << temp << " Kelvin is equal to " << result << " Celsius" << endl;
            }
            else if (choice == 4) {
                cout << "Enter Kelvin: ";
                cin >> temp;
                result = (temp - 273.15) * 9.0/5 + 32;
                cout << temp << " Kelvin is equal to " << result << " Fahrenheit" << endl;
            }
            else if (choice == 5) {
                cout << "Returning to main menu...\n";
            }
            else {
                cout << "Invalid option. Please try again." << endl;
            }
        }
        else if (option == 4) {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }

    } while (option != 4);

    return 0;
}
