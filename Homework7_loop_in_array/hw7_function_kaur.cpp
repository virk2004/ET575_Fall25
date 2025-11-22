#include <iostream>
#include <cstdlib>
using namespace std;


// function to collect the size of an array
int collect_size(){
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    return s;
}
// function to populate an array with RANDOM numbers 1–99
void populate_numbers(int ar[], int s){
    for(int i = 0; i < s; i++){
        ar[i] = rand() % 99 + 1;   // generates 1–99
    }
}
// function to print all numbers in an array
void print_numbers(int ar[], int s){
    cout << "\nNumbers in the array: ";
    for(int i = 0; i < s; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}
// function to find the minimum number
int array_min(int ar[], int s){
    int min = ar[0];   // assume first element is smallest

    for(int i = 1; i < s; i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }

    return min;
}
// function to compute the average of all values
float array_avg(int ar[], int s){
    int sum = 0;

    for(int i = 0; i < s; i++){
        sum += ar[i];

    }
    return (float)sum / s;
}
