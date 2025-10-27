/*
ANTERPREET KAUR
OCT 27TH, 2025
LAB13: RANDOM VARIABLES
*/

#include <iostream>
#include <cstdlib> 
#include <time.h>

using namespace std;

//EXAMPLE1: RANDOM NUMBER
//function to return a random number 
int random_number(){
    return rand();
}


//EXAMPLE2: DIFFERENT RANDOM NUMBER
int different_random(){
    srand(time(0)); 
    return rand();
}

//EXAMPLE3: RANGE OF RANDOM NUMBERS
//GENERATE RANDOM NUM FROM 0-9
int random_0_9(){
    return rand()% 10;
}

//EXAMPLE4: SPECIFIC RANGE OF RANDOM NUMBERS
int random_neg10_5(){
    return -10 + rand()%16; 
}

//EXERCISE: ROLLING A DICE
// function that generates a random number between 1 and 6
int random_1_6(){
}

//function to compare if 2 numbers are 1s
bool compare_ones(int r1, int r2){
}

//function to prompt result
void printresult (bool result){
}