/*
ANTERPREET KAUR
NOV 17TH, 2025
LAB16 : ARRAY IN A FUNCTIONS
*/
#include <iostream>

#include "Lab16_function_kaur.cpp"  

using namespace std;

int main()
{
// ---------------- Example 1 ----------------
cout << "\n---- Example 1: collect and populate data into an array ----\n";
int arraysize = 3;
int arrnum[arraysize];

fillup(arraysize, arrnum);
printarray(arraysize, arrnum);


// ---------------- Example 2 ----------------
cout << "\n---- Example 2: program to search a number in an array ----\n";

int arr_pos_numbers[ARRAY_SIZE];
int listsize = 0;
int targetnumber = 8;

fillarray(arr_pos_numbers, listsize);

printarray(listsize, arr_pos_numbers);

int resultsearch = search(arr_pos_numbers, listsize, targetnumber);

printresult(resultsearch, targetnumber);


// ---------------- LAB EXERCISE ----------------
cout << "\n---- EXERCISE ----\n";

int arr_number[] = {-6, -10, 9, 12, -3, -8, 5, 7, 4, 0};
int ex_size = sizeof(arr_number) / sizeof(arr_number[0]);

int sumEvenNumbers = sumEven(arr_number, ex_size);
int negativeCount = countNegative(arr_number, ex_size);

cout << "Sum of all EVEN numbers: " << sumEvenNumbers << endl;
cout << "Count of NEGATIVE numbers: " << negativeCount << endl;

return 0;
}
