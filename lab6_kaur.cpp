/*
ANTERPREET KAUR
SEP 15, 2025
LAB6, NESTED CONDITIONAL STATEMENT AND SWITCH
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n -----EXAMPLE 1: NESTED CONDITIONAL STATEMENT -----"<<endl;
    int n = 5;
    if (n>0){
        if (n%2 ==0){
            cout<<"The NUMBRE IS POSITIVE and even "<<endl;
    }
    else{
        cout<<"The NUMBER IS positive or odd"<<endl;
      }
    }
    else if (n<0){
         cout<<"The NUMBER IS negative or even"<<endl;
    }
    else{
         cout<<"The NUMBER IS negative or odd"<<endl;
    }
    else{
        cout<<"the number is zero"<<endl;

    }
    cout<<"\n -----EXAMPLE 2 : organize three numbers in decreasing order -----"<<endl;
    // declare the identifiers (variables name)
    int num1, num2, num3;

    //display a message and collect the three numbers 
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    //check if num 1 is greater than num2 and num3
    if(num1>num2 && num1>num3){
        if (num2>num3)
        cout<<" num1 is the greatest"<<endl;

    }
    //check if num2 i sthe greatest
    else if (num2>num1 && num2>num3)
    cout<<"The num2 is greatest"<<endl;

    //check if num3 is the greatest
    else if (num3>num2 && num3>num1){
        cout<<"num3 is the greatest"<<endl;

    }
    else{
        cout<<"All three numbers are the same!"<<endl;

    }

    return 0;
}

