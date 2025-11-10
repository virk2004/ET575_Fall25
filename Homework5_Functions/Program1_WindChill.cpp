/* Anterpreet kaur
Homework 5: FUNCTIONS
October 26TH, 2025

*/
#include <iostream>
#include <cmath>
using namespace std;

int speed();
float temp();
double windspeed(int s, float t);
void prompt_result(double wci);

int main() {
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s, t));
    return 0;
}

int speed() {
    int s;
    do {
        cout << "Enter wind speed in m/s (0 < speed < 100): ";
        cin >> s;
        if (s <= 0 || s >= 100) {
            cout << "Invalid input. Wind speed must be between 0 and 100.\n";
        }
    } while (s <= 0 || s >= 100);
    return s;
}

float temp() {
    float t;
    do {
        cout << "Enter temperature in Celsius (-90 < temp <= 10): ";
        cin >> t;
        if (t > 10 || t <= -90) {
            cout << "Invalid input. Temperature must be <= 10 and > -90.\n";
        }
    } while (t > 10 || t <= -90);
    return t;
}

double windspeed(int v, float tem) {
    double wci = 13.12 + (0.6215 * tem) - 11.37 * pow(v, 0.16) + (0.3965 * tem * pow(v, 0.16));
    return wci;
}

void prompt_result(double wci) {
    cout << "The wind chill index is: " << wci << endl;
    
}
