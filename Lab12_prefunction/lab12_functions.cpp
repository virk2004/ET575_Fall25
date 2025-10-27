/*
ANTERPREET KAUR
LAB-12
Oct 24, 2025
Lab 12: Scoping and Predefined Functions
*/

#include <iostream>
#include <cmath>  // for sqrt() and pow()
using namespace std;

// Example 1: function that calculates and returns the sum of two numbers
int add(int num1, int num2) {
    int sum = num1 + num2;  // local variable
    cout << "The sum in function add() is \t" << sum << endl;
    return sum;
}

// Example 2: global variable example
void doSomething() {
   int num = 20; 
    // modifying the global variable
    cout << "num value inside doSomething() is \t" << num << endl;
}

// Example 3: predefined math functions
float hyp(float side1, float side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// Example 3 continued: print the result
void printHyp(float s1, float s2, float h) {
    cout << "The hypotenuse of sides " << s1 << " and " << s2 << " is " << h << endl;
}
// Function to get number greater than zero
double getNumber(string prompt) {
    double n;
    do {
        cout << prompt;
        cin >> n;
        if (n <= 0)
            cout << "Invalid input. Enter a number greater than zero.\n";
    } while (n <= 0);
    return n;
}

// Function to calculate distance of two points
double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

// Function to print distance result
void printDistance(double x1, double y1, double x2, double y2, double dist) {
    cout << fixed;
    cout.precision(2);
    cout << "The distance of points (" << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") is " << dist << endl;
}