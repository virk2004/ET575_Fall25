/*
Anterpreet kaur
Homework 4: Loops
October 18th, 2025
Questions 1, 2, and 3
*/

#include <iostream>
using namespace std;

int main() {

    cout<<"\n----- QUESTION:1 -----"<<endl;
    int number;
    do {
        cout << "Enter a number greater than or equal to 10: ";
        cin >> number;

        if (number < 10) {
            cout << "The number is less than 10. Please enter again." << endl;
        }

    } while (number < 10);

    cout << number << " is a valid number!" << endl;

    cout<<"\n----- QUESTION:2 -----"<<endl;
    int num1, num2, minNum, maxNum;
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Determine which is min and max
    if (num1 < num2) {
        minNum = num1;
        maxNum = num2;
    } else {
        minNum = num2;
        maxNum = num1;
    }

    cout << "\nNumbers from " << minNum << " to " << maxNum << ":\n";
    int current = minNum;
    while (current <= maxNum) {
        cout << current << " ";
        current++;
    }
    cout << endl;

    cout<<"\n----- QUESTION:3 -----"<<endl;
    const int DIM = 11;
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if ((i == 2 && (j == 3 || j == 4)) ||
                ((i == 3 || i == 4) && j >= 3 && j <= 7) ||
                (i >= 5 && i <= 9 && (j == 3 || j == 4)))
            {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    
    return 0;
}