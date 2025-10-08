/* 
ANTERPREET KAUR
LAB08 FOR LOOP
OCTOBER 8TH, 2025
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n ----------Example 1: for loop ------------"<<endl;
    //print hello 5 times
    //cout<<"Hello";
    //cout<<"Hello";
    // cout<<"Hello";
    //cout<<"Hello";
    //cout<<"Hello";
    // we can use for loop
    for (int action=1; action<=5; action++){
        cout<<"Hello"<<action<<endl;

    }
    cout<<"\n ----------Example 2: for loop as a decrement counter------------"<<endl;
    // print from 9 to 1
    int n = 9;
    for (n; n>=1; n--){
        cout<<n<<"\t"<<endl;
    }
    cout<<endl;

    cout<<"\n ----------Example 3: for loop as an increment counter with ddifferent steps:  ------------"<<endl;
    // print 1-20 in a step of 3
    for (int m = 1;  m<=20; m+=3){
        cout<<m<<"\t"<<endl;
    }
    cout<<endl;

    cout<<"\n ----------Example 4: for loop with conditional statement  ------------"<<endl;
    // print all numbers, between -10 and 10 , that are multiple of 3
    for (int p = -10; p<=10; p++){
        if (p%3==0 && p!=0)
            cout<<p<<"\t";
    }

    cout<<"\n ----------Example 5: for loop with conditional statement  ------------"<<endl;
    // count ALL even numbers between 5 and 20
    int even_count = 0;
    for( int e = 5; e<=20; e++) {
        if (e%2==0 && e!=0){
            even_count ++;

        }
    }
    //print result
    cout<<"There is/are \t" <<even_count<<"\t even numbers"<<endl;

    cout<<"\n ----------Example 56: for loop with conditional statement  ------------"<<endl;
    D

return 0;
}
