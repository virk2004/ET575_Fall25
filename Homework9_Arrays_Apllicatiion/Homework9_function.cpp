/*
NAME: ANTERPREET KAUR
LAB: HOMEWORK9
LAB NAME: ARRAYS APPLICATION
DATE: NOVEMBER 29T,2025
FILE NAME: FUNCTION FILE
*/
#include <iostream>

#include <cstdlib>

using namespace std;

// Function: arraysize()
// Prompts user until a valid size (1–100) is entered
int arraysize() {
int size;
cout << "Enter an array size between 1 and 100: ";
cin >> size;

while (size < 1 || size > 100) {
cout << "Invalid! Enter a size between 1 and 100: ";
cin >> size;
    }
return size;
}
// Function: randPopulate()
// Fills array with random values between 10 and 30
void randPopulate(int noise[], int size) {
for (int i = 0; i < size; i++) {
noise[i] = rand() % 21 + 10; 
    // %21 gives 0–20, +10 gives 10–30
    }
}
// Function: print()
// Prints array elements
void print(int noise[], int size) {
    for (int i = 0; i < size; i++) {
        cout << noise[i] << "\t";
    }
    cout << endl;
}
// Function: reverse()
// Reverses array values by swapping both ends
void reverse(int noise[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = noise[start];
        noise[start] = noise[end];
        noise[end] = temp;

        start++;
        end--;
    }
}
