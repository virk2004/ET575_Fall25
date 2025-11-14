/*
ANTERPREET KAUR
LAB14
NOV 12, 2025
*/
#include <iostream>
#include<string>
using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

// declare the pointers
int* pointerint;
char* pointerchar;
string* pointerstring;

// testing the memory address
cout<<"Memory address of int"<<pointerint<< endl;

//pointer with initial value. value is the memory address of the pointed variable
pointerint = &num;
pointerchar = &c;
pointerstring = &n;

//check reference value of each pointer
cout<< "Reference value int = " <<pointerint<<endl;
cout<< "Reference value char = " <<pointerchar<<endl;
cout<< "Reference value string = " <<pointerstring<<endl;

//deference operators
cout<< "Dereference value int = " <<*pointerint<<endl;
cout<< "Dereference value char = " <<*pointerchar<<endl;
cout<< "Dereference value string = " <<*pointerstring<<endl;

}

//example2
//functions to print a value
void printvalue(string v){
    cout<<"value ="<<v<<endl;
}

//function that passed a refrence
void printreference(string &v){
    cout<<"passed by reference ="<<v<<endl;
}

//functionn that passed a memory address
void printaddress(string* v){
    cout<<" pass memory address ="<<v<<endl;
}


//example 3
void arrays(){

    // declare array with 5 values
    int scores[5];

    // assign values
    scores[0] = 60;
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    cout << "Array = " << scores << endl;
    cout << "The third score is " << scores[2] << endl;

    // initializing values at declaration
    int age_children[3] = {12, 8, 5};
    cout << "The 1st age = " << age_children[0] << endl;

    // string array example
    string names[] = {"Annie", "Peter", "Carl", "Charles", "Brian"};
    cout << "The fourth name is " << names[3] << endl;
}



// ========================================================
// Example 4 — sizeof arrays
// ========================================================
void sizeofarrays(){

    cout << "size of (const char[15]) = " << sizeof(const char[15]) << endl;

    cout << "size of char = " << sizeof(char) << endl;
    cout << "size of int = " << sizeof(int) << endl;
    cout << "size of float = " << sizeof(float) << endl;
    cout << "size of double = " << sizeof(double) << endl;
    cout << "size of long = " << sizeof(long) << endl;

}
