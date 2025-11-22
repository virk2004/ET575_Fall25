#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

#include "hw7_function_kaur.cpp"


// main
int main(){
srand(time(0));

// collect array size
int num = collect_size();

// declare the array
int a[num];

// populate array with random numbers
populate_numbers(a, num);

// print array
print_numbers(a, num);

// results
cout << "Minimum number:\t\t" << array_min(a, num) << endl;
cout << "Average of numbers:\t" << array_avg(a, num) << endl;

    return 0;
}
