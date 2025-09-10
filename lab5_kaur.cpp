/*
ANTERPREET KAUR
LAB5, FLOW CONTROL
09/10/25
*/

#include <iostream>
#include<string>
using namespace std;
int main(){
    cout<<"\n ----EXAMPLE1: BOOL VARIABLE ---"<<endl;
    //check if a number is positive
    // step1) declare and collect a number 
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // step2) check if the number is positive
    bool checkpositive = n>=0;
    //step 3) print the result 
    cout<<"Is" <<n<<" positive? " <<checkpositive<<endl;

    cout<<"\n ----EXAMPLE2: if statement ---"<<endl;
    // change the checking_code if number is positive
    int checking_code = 111;
    if (n>=0){
          checking_code = 999;
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n ----EXAMPLE3: if-else statement  ---"<<endl;
    // check if a number is even or odd
    if (n%2 ==00){
        cout<<n<<" is EVEN"<<endl;
    }
    else{
        cout<<n<<" is ODD "<<endl;

    }
    cout<<"\n ----EXAMPLE4: if-else statement ---"<<endl;
    //absolute value
    if (n>=0){
        cout<<n<<" is positive "<<endl;

    }
    else{
        cout<<n<<" is negative "<<endl;
        n*=-1;
        cout<<n<<" The absolute value is "<<n<<endl;
    }

    cout<<"\n ----EXAMPLE5: multiway statement ---"<<endl;
    // select the color accodring to a wavelength
    int wavelength =0;
    string emitted_color = "";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    //multiway conditional statement
    if (0<= wavelength<=379)
        emitted_color = "ultraviolent";
    else if (380 <=wavelength<=520)
        emitted_color = "blue";
    else if (521<=wavelength<=590)
        emitted_color = "green";
    else if (591<=wavelength<=740)
        emitted_color = "red";
    else if (wavelength>=741)
        emitted_color = "infrared";
    else
        emitted_color = "unable to read";
       
    //print result
    cout<<"The emitted color of wavelength "<<wavelength<<" is "<<emitted_color<<endl;
    
    
    
    return 0;

}
