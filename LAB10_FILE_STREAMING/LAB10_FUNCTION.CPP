/*
NAME: ANTERPREET KAUR
LAB 10-FILE STREAMING
DATE: NOVEMBER 29TH, 2025
FILE NAME: LAB10_FUNCTION.CPP
*/
#include <iostream>

#include <fstream>

#include <string>

#include <sstream>

using namespace std;

// Function: displayFile()
// Reads and prints the entire file to console
void displayFile(const string &filename) {
    ifstream infile(filename);
    if (!infile) {
        cout << "Error: cannot open file " << filename << endl;
        return;
    }

    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}
// Function: countWords()
// Returns the number of words in the file
int countWords(const string &filename) {
    ifstream infile(filename);
    if (!infile) {
        cout << "Error: cannot open file." << endl;
        return 0;
    }

    int count = 0;
    string word;

    while (infile >> word) {
        count++;
    }

    infile.close();
    return count;
}
// Function: countEarth()
// Counts how many times the word "Earth" appears
// Case-insensitive version to match typical expectations
int countEarth(const string &filename) {
    ifstream infile(filename);
    if (!infile) {
        cout << "Error: cannot open file." << endl;
        return 0;
    }

    int count = 0;
    string word;

    while (infile >> word) {

        // Remove punctuation around words: Earth, Earth. Earth!
        while (!word.empty() && ispunct(word.back()))
            word.pop_back();

        while (!word.empty() && ispunct(word.front()))
            word.erase(0, 1);

        // Convert to lowercase for case-insensitive matching
        string lower = word;
        for (char &c : lower)
            c = tolower(c);

        if (lower == "earth")
            count++;
    }

    infile.close();
    return count;
}
