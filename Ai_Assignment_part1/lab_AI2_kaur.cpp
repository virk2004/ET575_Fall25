#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Type a word: ";
    cin >> word;

    // 2nd character
    char secondChar = word.at(1);
    cout << "2nd character: " << secondChar << endl;

    // word length
    int length = word.size();
    cout << "Word has: " << length << " characters" << endl;

    // replace with marker
    string newWord = word;
    if (length >= 3) {
        newWord.replace(2, 2, "--$--");
    }
    cout << "Replace word: " << newWord << endl;

    // remove last 3 characters if length allows
    string shortened = word;
    if (length > 3) {
        shortened.erase(length - 3);
    }
    cout << "Remove end characters: " << shortened << endl;

    return 0;
}

/*
--- AI Assistant Used: GitHub Copilot --- 

Was the code correct? no

Was it readable and properly commented? shorter comments

Were you able to explain each line of code? not at all totally different from mine one.

Did it use the same programming concepts we learned in class? Yes, plus extra safety checks

Terminal Output: (Paste your own run output here after compiling)

Type a word: Anter
2nd character: n
Word has: 5 characters
Replace word: An--$--r
Remove end characters: An
*/
