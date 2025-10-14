/*
ANTERPREET KAUR
ET575
LAB9: 
10/14/25
*/
#include <iostream>
#include<string>

using namespace std;
int main (){

    cout<<"\n----- Example 1 : while loop as a counter -----"<<endl;
    //print from 1to 5
    int n=1;
    while(n<=5){
        cout<<n<<"\t";
        n++;
    }cout<<endl;


    cout<<"\n----- Example 2 : while loop as a counter -----"<<endl;
    //print from 3 to 0
    int m = 3;
    while(m>=0){
        cout<<m<<"\t";
        m--;
    } cout<<endl;


    cout<<"\n----- Example 3 : while loop as a decrement counter -----"<<endl;
    m = 3;
    while ( m--  >= 0){
        cout<<m<<"\t";

    } cout<<endl;



    cout<<"\n----- Example4 : while loop as a decrement counter -----"<<endl;
    m = 3;
    while ( --m  >= 0){
        cout<<m<<"\t";

    } cout<<endl;


    cout<<"\n----- Example 6 : do-while loop to validate  a number  -----"<<endl;
    int num ;
    do{
    cout<<"Enter a number between 10 and 20 inclusive: ";
    cin>>num;
    } while (! (num >= 10 && num <=20));
    cout <<"End of do-while loop. Entered number: "<<num<<endl;

    cout<<"\n----- Example 7 : do-while loop to validate  a number  -----"<<endl;
    // co while loop to run a program again
    // program checks if number id positive, negatie or zero
    int number ;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if (number==0){
            cout<<"The number is zero"<<endl;
        }

        else if (number>0){
            cout<<number<<"The number is positive"<<endl;
        }

        else {
            cout<<number<<"The number is Negative"<<endl;
        }

        cout<<"Do you want to check another number?: ";
        cin>>choice;
    }
    while( choice=='y' || choice=='Y');

    cout<<"\n ----- Example 8 : do-while loop set to true  -----"<<endl;
     n = 0;
     int sum_positive = 0;
        do{
            cout<<"Enter a positive number: ";
            cin>>n;
            if (n>=0){
                sum_positive +=n;
            }
            else{
                break;
            }


        } while (true);
        cout<<"The total sum is "<<sum_positive<<endl;



    cout<<"\n----- Example 9: withdraw from a bank acc -----"<<endl;
    int balance = 1000;
    int w = 0;
    while(true){
        cout<<"How much do you want to withdraw? ";
        cin>>w;
        if (w>balance){
            cout<<"Can't withdraw "<<w<<". Enter another amount. ";

    }

        else{
            balance -=w ;
            cout<<"withdrawed $ "<<w<<" The new balance $ "<<balance<<endl;
            break;
        }
    }cout<<"Thank you for banking with us."<<endl;


    cout<<"\n----- Example 10: Continue statement -----" <<endl;
    // while loop to print, from 0 to 10, and add all the numbers except 5 
    int sum_all = 0;
    int x = 0;
    while (x ++ < 10){
       
        if (x ==5){
            continue;
        }
        sum_all += x;
        cout<<x<<"\t";
     }  cout<< "The total sum of numbers = "<<sum_all<<endl;


    
    cout << "\n----- EXERCISE: -----" << endl;

    number = 0;
    int total = 0;

    do{
        cout << "Enter a number (0 to stop): ";
        cin >> number;

        if (number == 0)
            break;

        int sum = 0;
        int digit = number;

        while (digit > 0) {
            sum = sum + (digit % 10);
            digit = digit / 10;
        }

        cout << "Sum of digits for " <<number<<" is "<<sum<<endl;
        total = total + sum;

    }while (true);

    cout<<"The total sum is " <<total<<endl;

    return 0;
}
