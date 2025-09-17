
//ANTERPREET KAUR
//AI1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    // Ask user to type a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character of the word
    cout << "2nd character: " << word[1] << endl;

    // Find and print the length of the word
    cout << "Word has: " << word.length() << " characters" << endl;

    // Replace 2 characters starting from the 3rd character with "--$--"
    string replaced = word;
    replaced.replace(2, 2, "--$--");
    cout << "Replace word: " << replaced << endl;

    // Remove last 3 characters
    string removed = word;
    removed.erase(removed.length() - 3);
    cout << "Remove end characters: " << removed << endl;

    return 0;
}

/*
--- AI Assistant Used: ChatGPT ---

Was the code correct? not fully

Was it readable and properly commented? No my code generated from class is different from this one

Were you able to explain each line of code? at some points.

Did it use the same programming concepts we learned in class? 50-50

Terminal Output: (Paste your own run output here after compiling)

Output:
Enter a word: Anter
2nd character: n
Word has: 5 characters
Replace word: An--$--r
Remove end characters: An
*/
