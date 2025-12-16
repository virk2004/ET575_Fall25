/* 
ANTERPREET KAUR
LAB_AI_PART2_KAUR.CPP
OCTOBER 16TH, 2025
*/

#include <iostream>
using namespace std;

int main() {
// Declare variables
double celsius, fahrenheit;
int choice;

// Display conversion menu
cout << "Choose conversion type:\n";
cout << "1. Celsius to Fahrenheit\n";
cout << "2. Fahrenheit to Celsius\n";
cout << "Enter choice: ";
cin >> choice; // User selects which conversion to perform

// If the user chooses Celsius → Fahrenheit
if (choice == 1) {
cout << "\nEnter temperature in Celsius: ";
cin >> celsius; // Get Celsius value from user

// Convert Celsius to Fahrenheit using formula: (1.8 * C) + 32
fahrenheit = (1.8 * celsius) + 32;
// Display result
cout << "\n" << celsius << "°C is " << fahrenheit << "°F\n";

// ----- Example 1 -----
// Input:
//   Enter choice: 1
//   Enter temperature in Celsius: 25
// Output:
//   25.0°C is 77.0°F
}

// If the user chooses Fahrenheit → Celsius
else if (choice == 2) {
cout << "\nEnter temperature in Fahrenheit: ";
cin >> fahrenheit; // Get Fahrenheit value from user

// Convert Fahrenheit to Celsius using formula: (5.0 / 9.0) * (F - 32)
celsius = (5.0 / 9.0) * (fahrenheit - 32);

// Display result
cout << "\n" << fahrenheit << "°F is " << celsius << "°C\n";




// ----- Example 2 -----
// Input:
//   Enter choice: 2
//   Enter temperature in Fahrenheit: 98.6
// Output:
//   98.6°F is 37.0°C
}
// If user enters anything other than 1 or 2
else {
cout << "\nInvalid choice! Please restart the program.\n";
    }

return 0; // End of program
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
