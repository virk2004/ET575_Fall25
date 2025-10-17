/* 
ANTERPREET KAUR
LAB_AI_PART2_KAUR.CPP
OCTOBER 16TH, 2025
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    double celsius, fahrenheit;

    cout << "Choose conversion type:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (1.8 * celsius) + 32;
        cout << celsius << "°C is " << fahrenheit << "°F" << endl;
    } 
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << fahrenheit << "°F is " << celsius << "°C" << endl;
    } 
    else {
        cout << "Invalid choice. Please run the program again." << endl;
    }

    return 0;
}





/*
-------------------------------------------
REVIEW QUESTIONS
-------------------------------------------

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// No, it uses basic C++ features such as variables, input/output, arithmetic, and conditionals, all of which I understand.

// 2. Are there any issues or improvements you noticed? Explain.
// The code could be improved by rounding to one decimal place and validating non-numeric input.

// 3. What test cases did you try, and why? Explain.
// I tested:
//  - 25°C → expected 77°F
//  - 0°C → expected 32°F
//  - 9
*/
