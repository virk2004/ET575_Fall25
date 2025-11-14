/*
ANTERPREET KAUR
LAB14
NOV 12, 2025
*/
#include <iostream>
using namespace std;
#include "lab14_function_kaur.cpp"

int main() {
    cout <<"-----Example1: Pointers-----"<< endl; 
    pointer_ref();

    cout << "\n------ Example 2: pointers and reference in a function --------" << endl;
    string something = "Hello World!";
    printvalue(something);
    printreference(something);
    printaddress(&something);
    printvalue(something);   // show if reference changed the original string

    cout << "\n------ Example 3: arrays --------" << endl;
    arrays();

    cout << "\n------ Example 4: sizeof arrays --------" << endl;
    sizeofarrays();








    return 0;
}

