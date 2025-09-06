/*
Student's full name:Anterpreet Kaur
Aug 27, 2025
Lab 1, iostream 
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "------ Example 1: cout data ------" << endl;
    cout << "This is a C++ code" << endl;
    // variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout << "\nWelcome to C++ \t\t" << username << endl;

    cout << "------ Example 2: cin data ------" << endl;
    cout << "Enter a new username " << endl;
    cin >> username;
    cout << "New user is " << username << endl;

    cout << "------ Example 3: data type ------" << endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout << "Given symbol = " << sym << endl;
    cout << "Given distance = " << distance << endl;
    cout << "Given number = " << number << endl;

    cout << "------ EXERCISE ------" << endl;
    // declare variables
    string country;
    char gender;
    int zipcode;
    double rate;

    // collect data
    cout << "Enter country: ";
    cin >> country;

    cout << "Enter gender (f=Female, m=Male, o=Other): ";
    cin >> gender;

    cout << "Enter zip code: ";
    cin >> zipcode;

    cout << "Enter tax rate: ";
    cin >> rate;

    // print the result with alignment using \t
    cout << "\nEntered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;
    cout << "Zip code:\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t" << rate << endl;

    return 0;
}