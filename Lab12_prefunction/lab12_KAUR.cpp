/*
ANTERPREET KAUR
LAB-12
Oct 24, 2025
Lab 12: Scoping and Predefined Functions
*/

#include <iostream>
using namespace std;

// global variable
int num = 8;

#include "lab12_functions.cpp"

int main() {
    cout << "\n------- Example 1: Local Variables -------" << endl;
    int sum = add(3, 7) + add(1, 6); // calling add() twice
    cout << "The total sum in main() is \t" << sum << endl;

    cout << "\n------- Example 2: Global Variables -------" << endl;
    cout << "num original value is \t" << num << endl;
    doSomething();
    num = 5;
    cout << "num in main function is \t" << num << endl;

    cout << "\n------- Example 3: Hypotenuse -------" << endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1, s2);
    printHyp(s1, s2, h);

    cout << "\n------- LAB EXERCISE -------\n";
    double x1 = getNumber("Enter x1 (>0): ");
    double y1 = getNumber("Enter y1 (>0): ");
    double x2 = getNumber("Enter x2 (>0): ");
    double y2 = getNumber("Enter y2 (>0): ");

    double dist = calcDistance(x1, y1, x2, y2);
    printDistance(x1, y1, x2, y2, dist);

    

    return 0;
}
