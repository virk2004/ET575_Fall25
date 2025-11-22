/*
Student Full Name: Anterpreet kaur
Nov 19, 2025
Lab 17, 2D Array
*/

#include <iostream>

using namespace std;

// EXAMPLE1: DECLARING A 2 D
void array_dec(){
    int array[3][5] = {
        {5, 10, 15, 20, 25},
        {-2, -9, -1, -5, -6},
        {6, 0, 7, 9, 6}
    };

    cout << "3rd element in the second row = " << array[1][2] << endl;
}
// EXAMPLE 2: FUNCTION TO PRINT EACH VALUE IN A 2D ARRAY
const int NUMCOLS = 5;
void print2d(int a[][NUMCOLS], int rowsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < NUMCOLS; col++){
            cout << a[row][col] << "\t";
        }
        cout << endl;
    }
}
// EXAMPLE 3: populate using user input
void populate_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            int n;
            cout << "Enter a number: ";
            cin >> n;
            arr[row][col] = n;
        }
    }
}
void print_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            cout << arr[row][col] << "\t";
        }
        cout << endl;
    }
}
// EXAMPLE 4: sum all values in 2D array
int sum_all(int arr[][3], int rowsize, int colsize){
    int sum = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return sum;
}
// EXAMPLE 5:Function that returns the total of odd numbers in 2D array
int total_odd(int arr[][3], int rowsize, int colsize){
    int counter_odd = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            if(arr[row][col] % 2 == 1 && arr[row][col] != 0){
                counter_odd++;
            }
        }
    }
    return counter_odd;
}


//-----LAB EXERCISE FUNCTIONS-----
// random populate
void populate(int arr[][4], int rows, int cols){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            arr[r][c] = rand() % 101;  // 0 - 100
        }
    }
}
// print random-filled array
void print_arr(int arr[][4], int rows, int cols){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            cout << arr[r][c] << "\t";
        }
        cout << endl;
    }
}

// compute average
double average(int arr[][4], int rows, int cols){
    int sum = 0;
    int total = rows * cols;

    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            sum += arr[r][c];
        }
    }

    return (double)sum / total;
}
