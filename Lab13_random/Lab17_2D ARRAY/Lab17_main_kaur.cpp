/*
  Student Full Name
  Nov 19, 2025
  Lab 17, 2D Array
*/

#include <iostream>

#include "Lab17_function_kaur.cpp"

using namespace std;

int main(){
    cout << "\n --- example 1: array declaration ---" << endl;
    array_dec();


    cout << "\n --- example 2: print each value in a 2D array ---" << endl;
    const int ROWSIZE = 5;
    int example2_array[3][ROWSIZE] ={
        {5, 10},
        {-2, -9},
        {6}
    };
    print2d(example2_array, 3);

    cout << "\n --- example 3: populating an array with numbers ---" << endl;
    int arr_num[2][3];    // declare array for example 3
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout << "\n --- example 4: sum of all numbers in a 2D array ---" << endl;
    int s = sum_all(arr_num, 2, 3);
    cout << "The total sum = " << s << endl;


    cout << "\n --- example 5: odd numbers in a 2D array ---" << endl;
    int c = total_odd(arr_num, 2, 3);
    cout << "Total odd numbers = " << c << endl;


    
    // ------LAB EXERCISE-------
    cout << "\n\n ===== LAB EXERCISE: NEW RUN =====\n";
    srand(time(0));  // seed RNG
    char again = 'y';

    while(again == 'y' || again == 'Y'){
    int lab_arr[3][4];
    populate(lab_arr, 3, 4);      // fill with random values
    print_arr(lab_arr, 3, 4);     // output values
    double avg = average(lab_arr, 3, 4);

    cout << "\nAverage of all numbers = " << avg << endl;

    cout << "\nDo you want another run (y/n)? ";
    cin >> again;
    }

    cout << "\nProgram ended.\n";
    return 0;
}
