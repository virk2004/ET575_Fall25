/*
ANTERPREET KAUR
OCT 27TH, 2025
LAB13(MAIN): RANDOM VARIABLE
*/

#include <iostream>
#include "lab13_function_kaur.cpp"
#include <time.h>

using namespace std;

int main(){
    srand(time(0)); 
    cout<<"\n -----EXAMPLE1: RANDOM VARIABLES----"<<endl;
    int r = random_number();
    cout<<"Random number = "<<r<<endl;


    cout<<"\n -----EXAMPLE2: DIFFERENT RANDOM VARIABLES----"<<endl;
    int diff_random = different_random();
    cout<<"Different Random number = "<<diff_random<<endl;

    cout<<"\n -----EXAMPLE3: RANDOM NUM BETWEEN 0 AND 9----"<<endl;
    int r_0_9 = random_0_9();
    cout<<" Number between 0 and 9: \t "<< r_0_9 <<endl;

    cout<<"\n -----EXAMPLE4: RAMDOM NUMBER BETEEN -10 TO 5 ----"<<endl;
    cout<<" Random number between -10 to 5 \t "<< random_neg10_5() <<endl;

    cout<<"\n -----EXERCISE ----"<<endl;
    //call function that generates a num between 1 and 6
    int run1 = random_1_6();
    int run2 = random_1_6();
    cout << "Dice 1: " << run1 << ", Dice 2: " << run2 << endl;

    //call function to check for snake_eyes
    bool result = compare_ones(run1, run2);

    //call function to print result
    printresult(result);

    return 0;



}