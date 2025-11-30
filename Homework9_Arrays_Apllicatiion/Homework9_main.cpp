/*
NAME: ANTERPREET KAUR
LAB: HOMEWORK9
LAB NAME: ARRAYS APPLICATION
DATE: NOVEMBER 29T,2025
FILE NAME: MAIN 
*/

#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

// Function Prototypes
int arraysize();
void randPopulate(int noise[], int size);
void print(int noise[], int size);
void reverse(int noise[], int size);

int main() {
srand(time(0)); // Seed random generator
// Get array size
int sizearray = arraysize();  
// Declare array with the obtained size
int noise[sizearray];          

// Populate array with random values
randPopulate(noise, sizearray);

// Display original array
cout << "Original Set:" << endl;
print(noise, sizearray);

// Reverse the array
reverse(noise, sizearray);

// Display reversed array
cout << endl << "Reversed Set:" << endl;
print(noise, sizearray);

return 0;
}

