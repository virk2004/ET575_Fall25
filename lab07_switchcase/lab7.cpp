/*
ANTERPREET KAUR
LAB:07
SEPTEMBER 21ST, 2025
*/
#include <iostream>
using namespace std;

int main() {
    
    // CLASS EXAMPLE

    cout << "---- CLASS EXAMPLE ----" << endl;
    //arithmetic operations:
    char opExample;

    cout << "Enter an operation (+, -, *, /, %, q to quit): ";
    cin >> opExample;

    switch (opExample) {
        case '+':
            cout << "You selected addition." << endl;
            break;
        case '-':
            cout << "You selected subtraction." << endl;
            break;
        case '*':
            cout << "You selected multiplication." << endl;
            break;
        case '/':
            cout << "You selected division." << endl;
            break;
        case '%':
            cout << "You selected modulus." << endl;
            break;
        case 'q':
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    cout << endl; // spacing

    // LAB EXERCISE:
    cout << "---- EXERCISE ----" << endl;

    int num1, num2;
    char op;

    // Step 1) ENTER THE first number:
    cout << "Enter the first number: ";
    cin >> num1;

    // Step 2) ENTER THE second number:
    cout << "Enter the second number: ";
    cin >> num2;

    // Step 3) CHOOSE AN operation:
    cout << "Choose an operation (+, -, *, /, %, q to quit): ";
    cin >> op;

    // Step 4) Switch-case for operations
    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;

        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;

        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;

        case '%':
            if (num2 != 0) {
                cout << "Result: " << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed!" << endl;
            }
            break;

        case 'q':
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid operation entered!" << endl;
    }

    return 0;
}
