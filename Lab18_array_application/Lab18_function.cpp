
// Lab 18 - Array Application
// Antar Preet Kaur
// ET-575
// Lab18_function.cpp

#include <iostream>

#include <cmath>

using namespace std;


// collectnumber()
// Collects up to 5 non-zero integers using sentinel 0
// Returns total numbers entered
int collectnumber(int arr[], int size) {
    int value;
    int count = 0;

    cout << "Enter up to 5 non-zero integers (0 to stop): " << endl;

    while (count < size) {
        cout << "Enter number #" << (count + 1) << ": ";
        cin >> value;

        if (value == 0) {
            break; // sentinel stops input
        }

        arr[count] = value;
        count++;
    }

    return count;
}

// Averagenumber()
// Returns average of entered numbers
double Averagenumber(int arr[], int count) {
    int sum = 0;

    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / count;
}

// Closestmean()
// Compares values and returns number closest to avg
int Closestmean(int arr[], int count, double avg) {
    int closest = arr[0];
    double minDiff = abs(arr[0] - avg);

    for (int i = 1; i < count; i++) {
        double diff = abs(arr[i] - avg);

        if (diff < minDiff) {
            minDiff = diff;
            closest = arr[i];
        }
    }
    return closest;
}

// Printresult()
// Prints the final result message
void Printresult(double avg, int closest) {
cout << "\nThe closest number to average " <<avg< "is " << closest << "." << endl;
}
