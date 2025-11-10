#include <iostream>
using namespace std;

// Function to collect a number from the user
int collectNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// Function to check if numbers are in descending order
bool inOrder(int num1, int num2, int num3) {
    return (num1 >= num2 && num2 >= num3);
}

// Function to print the result
void order_result(bool desc_order) {
    if (desc_order)
        cout << "The numbers are in descending order." << endl;
    else
        cout << "The numbers are not in descending order." << endl;
}

// Function to run the main logic with repetition
void runProgram() {
    char option = 'y';
    while (option == 'y' || option == 'Y') {
        int n1 = collectNumber();
        int n2 = collectNumber();
        int n3 = collectNumber();

        bool result = inOrder(n1, n2, n3);
        order_result(result);

        cout << "Do you want to run the program again? (y/n): ";
        cin >> option;
    }
    cout << "Program ended." << endl;
}

// Main function
int main() {
    runProgram();
    return 0;
}
