/*
Anterpreet Kaur
October 22nd, 2025
Lab 11, Introduction to Functions

*/
#include <iostream>
#include "Lab11_function.cpp"

using namespace std;

int main(){
    cout<<"\n----Example:1-void function----"<<endl;
    printhello();
    printhello();
    printhello();

    cout<<"\n----Example:2-void function with arguments----"<<endl;
    string username = "Anna";
    greeting("peter");
    greeting(username);
    greeting("carl");

    cout<<"\n----Example:3-Funtions with returning value----"<<endl;
    int savefive = returnfive();
    cout<<"The returned value =\t"<<savefive<< endl;
    savefive +=2;
    cout<<"The returned value after +=2 =\t"<<savefive<< endl;

    cout<<"\n----Example:4-Code after return statement----"<<endl;
    printsome();
    int n = somenumber();
    cout<<"somenumber \t"<<n<< endl;

    cout<<"\n----Example:5-Function that calculates area of square----"<<endl;
    float area_square = areasquare(2.5);
    cout<<"The area of square is:\t"<<area_square<< endl;
    
    cout<<"\n----Example:6-Product of 2-nums----"<<endl;
    int p = product (2,3);
    cout<<" The product is: \t "<< p << endl;
    
    cout << "\n----Example:7-calculate the farenheit temperature---- " << endl;
    double f = fah (12.5);
    printfah(f);
    cout<<"The farenheit temperature is :\t"<< f <<endl;

    cout<<"\n----Example:8-check a number----"<<endl;
    string checknum = checknumber(3);
    printnumber (3, checknum);

    cout<<"\n----Exercise:Check if num is even----"<<endl;
    int num;
    cout<<" Enter an integer: ";
    cin>> num;

    bool evenResult = isEven(num);
    printEvenResult(num, evenResult);

    return 0;
}