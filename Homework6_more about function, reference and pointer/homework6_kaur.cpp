/*
Student full name: Anterpreet Kaur
Homework: 6
Homework 6, functions and introduction to pointers and reference
*/

#include <iostream>
#include <cmath>     // for sqrt() and pow()
#include <cstdlib>   // for rand()
#include <ctime>     // for seeding random

using namespace std;

// Function 1: generate random side
int rand_side() {
    return rand() % 20 + 1;   // generates a random number between 1 and 20
}

// Function 2: calculate hypotenuse
double hyp(int side1, int side2) {
    double result = sqrt(pow(side1, 2) + pow(side2, 2));
    return result;
}

// Function 3: print result
void print_result(int side1, int side2, double hypotenuse) {
    cout.setf(ios::fixed);     // fixed-point notation
    cout.precision(2);         // two decimal places
    cout << "The hypotenuse of a right angle with side "
         << side1 << " and " << side2
         << " is = " << hypotenuse << endl;
}

// Main function (DO NOT MODIFY)
int main() {
    srand(time(0)); // seed random number generator
    int side1 = rand_side();
    int side2 = rand_side();
    double result = hyp(side1, side2);
    print_result(side1, side2, result);
    return 0;
}