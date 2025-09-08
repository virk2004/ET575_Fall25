/*
ANTERPREET KAUR
ET575
LAB3: STRINGS AND STRING METHODS
09/08/25
*/
#include <iostream>
#include<string>

using namespace std;
int main (){
    cout<<"\n----- Example 1 : string indexing -----"<<endl;
    string first_name = "Anterpreet";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name.at(0)<<endl;
   
    cout<<"\n----- Example 2 : Amount of character in A STRING -----"<<endl;
    int characters = first_name.length();
    cout<<"There is " <<characters<< "character/s in "<<first_name<<endl;

    cout<<"\n----- Example 3: concatenate character/s in a string---"<<endl;
    string last_name = "kaur";
    string username = "ak123";
    cout <<"concatenated word = " <<first_name+last_name + username <<endl;
    

    cout<<"\n----- Example 4:substracting characters in a string---"<<endl;
    string msg = "Today is a beautiful day!";
    //extract 5 character from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted characters = "<<subst_char<<endl;

    cout<<"\n----- Example 5:inserting characters in a string--"<<endl;
    //insert the word "maybe"
    msg.insert(5, " maybe");

    cout <<"After insert method = "<<msg<<endl;

    cout<<"\n----- Example 6:inserting characters to the end of a string----"<<endl;
    msg.append("---by 'prof' anter");
    cout<<"After append method = "<<msg<<endl;

    cout<<"\n----- Example 7:replace characters in a string -----"<<endl;
    msg.replace(17, 9, "bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n----- Example 8 : erase characters from a string------"<<endl;
    // erase the word" Today"
    msg.erase(0, 5);
    cout<<"After erasing method = "<<msg<<endl;

    cout<<"\n----- Example 9: finding characters in a string ---"<<endl;
    // find method return the index number of the first found or occurance
    // if the word or character was not found , it returns -1
    // find the word 'prof'
    int index_prof = msg.find("prof") ;
    cout<<"The index of prof = " << index_prof<<endl;

    cout<<"\n----- Exercise: ---"<<endl;
    //step1: ask to for "word"
    string word = "";
    cout<<"word: ";

    cin>>word;

    //step2: print 2nd character
    cout<<"2nd character = "<<word[2]<<endl;

    //step3: find and print length of the"word"
    int word_length = word.length();
    cout<<"word has : "<<word_length<<" characters "<<endl;

    //step4: replace 2 characters from the 3rd character with "-- $ --" . 
    word.replace(2, 2, "-- $ --");
    cout << "Replace word: " << word << endl;

    //step5: remove 3 characters from the end of the message. 
    word.erase(word.length() - 3, 3);
    cout << "Remove end characters: " << word << endl;

    
    return 0;

}


