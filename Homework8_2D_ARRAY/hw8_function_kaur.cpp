/*
ANTERPREET KAUR
HOMEWORK 8 - 2D ARRAY
DATE: 11/23/2025
*/
#include <iostream>
using namespace std;

const int ROWCOL_ARRAY = 4;

// Function to search for a value in a 2D array
// result[0] = row, result[1] = col
void searchValue(int arr[ROWCOL_ARRAY][ROWCOL_ARRAY], int value, int result[])
{
    for (int i = 0; i < ROWCOL_ARRAY; i++)
    {
        for (int j = 0; j < ROWCOL_ARRAY; j++)
        {
            if (arr[i][j] == value)
            {
                result[0] = i;
                result[1] = j;
                return;  // stop when found
            }
        }
    }

    // If not found
    result[0] = -1;
    result[1] = -1;
}

// Function to display a message
void displayMessage(int value, int result[])
{
    if (result[0] != -1)
    {
        cout << "Number " << value
             << " was found in row " << result[0]
             << " and column " << result[1] << "." << endl;
    }
    else
    {
        cout << "Number " << value << " was not found." << endl;
    }
}
