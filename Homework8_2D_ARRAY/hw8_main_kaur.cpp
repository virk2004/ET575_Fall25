/*
ANTERPREET KAUR
HOMEWORK 8 - 2D ARRAY
DATE: 11/23/2025
*/
#include <iostream>
using namespace std;

const int ROWCOL_ARRAY = 4;

// Declare functions
void searchValue(int arr[ROWCOL_ARRAY][ROWCOL_ARRAY], int value, int result[]);
void displayMessage(int value, int result[]);

int main()
{
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int value;
    int result[2];

    cout << "Enter a number to search: ";
    cin >> value;

    // Call function to search
    searchValue(ar, value, result);

    // Call function to display message
    displayMessage(value, result);

    return 0;
}
