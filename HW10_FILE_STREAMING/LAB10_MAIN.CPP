/*
NAME: ANTERPREET KAUR
LAB 10-FILE STREAMING
DATE: NOVEMBER 29TH, 2025
FILE NAME: LAB10_FUNCTION.CPP
*/

#include <iostream>

#include <fstream>

#include <string>

using namespace std;
// Function prototypes
void displayFile(const string &filename);
int countWords(const string &filename);
int countEarth(const string &filename);

int main() {
string filename = "Remembering_Earth.txt";
string studentName;
cout << "Enter your full name: ";
getline(cin, studentName);

//1. Display file contents
cout << "\n--- File Contents ---\n";
displayFile(filename);

//2. Count words and write to wordcounts.txt
int totalWords = countWords(filename);

ofstream outfile("wordcounts.txt");
outfile << studentName << endl;
outfile << "Total number of words: " << totalWords << endl;
outfile.close();

//3. Count occurrences of "Earth" and append
int earthCount = countEarth(filename);

ofstream appendFile("wordcounts.txt", ios::app);
appendFile << "The word 'Earth' appears " << earthCount 
               << " times in the document." << endl;
appendFile.close();

cout << "\nResults written to wordcounts.txt\n";

return 0;
}
