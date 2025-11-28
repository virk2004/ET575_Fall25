//Lab18_kaur.cpp
// Lab 18 - Array Application
// Antar Preet Kaur
// ET-575

#include <iostream>
using namespace std;

// Function prototypes

int collectnumber(int arr[], int size);

double Averagenumber(int arr[], int count);

int Closestmean(int arr[], int count, double avg);

void Printresult(double avg, int closest);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    
    // Step 1: Collect numbers
    int count = collectnumber(numbers, SIZE);

    // Prevent division by zero
    if (count == 0) {
        cout << "No numbers entered. Program ending." << endl;
        return 0;
    }

    // Step 2: Compute average
    double avg = Averagenumber(numbers, count);

    // Step 3: Find closest number
    int closest = Closestmean(numbers, count, avg);

    // Step 4: Display result
    Printresult(avg, closest);

    return 0;
}
