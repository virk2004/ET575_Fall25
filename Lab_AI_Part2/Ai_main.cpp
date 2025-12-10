#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, converted;

    // Display conversion options
    cout << "Choose conversion type:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Perform conversion based on user choice
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        converted = (1.8 * temperature) + 32;
        cout << temperature << "°C is " << converted << "°F\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        converted = (5.0 / 9.0) * (temperature - 32);
        cout << temperature << "°F is " << converted << "°C\n";
    } else {
        cout << "Invalid choice. Please run the program again.\n";
    }

    return 0;
}

/*
Review and Understand Section:

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// No, the code uses basic concepts like variables, input/output (cin/cout), arithmetic operations, and if/else statements — all of which we've covered in class.

// 2. Are there any issues or improvements you noticed? Explain.
// The code works well, but it could be improved by validating user input (e.g., checking for non-numeric entries or negative temperatures if needed). Also, formatting the output to one decimal place would make it cleaner.

// 3. What test cases did you try, and why? Explain.
// I tried:
//    - Celsius to Fahrenheit: 20°C → should return 68°F
//    - Fahrenheit to Celsius: 98.6°F → should return 37°C
// These are common reference points and help verify the formulas are implemented correctly.
*/
