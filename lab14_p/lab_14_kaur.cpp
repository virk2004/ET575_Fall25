#include <iostream>
using namespace std;


void cheers(int n) {
    if (n == 1) {
        // stop recursion function
        cout << "STOP" << endl;
    } else {
        // Print n*2
        cout << (n * 2) << endl;
        // Recursive function
        cheers(n - 1);
    }
}
// recursive function to validate a number
int getnumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error. enter a positive number" << endl;
        return getnumber(); 
    }
    return n;
}
//linear function
int linear_recursive(int m){
    if (m>1){
        return (m+1)*linear_recursive(m-2);
    }
    else{      
        return 10;
    }
}




int main() {
    cout<<"-----EXAMPLE3:----"<<endl;
    int x = linear_recursive(7);
    cout<<" final = " << x << endl;
    /*
    function  |     m=    | if (m>1) {return (m+1)*linear_recursive(m-2); | else 
    iteration
        1           m = 7  |  → (7+1=8) * Linear_recursive(7-2=5)          |skip
        2           m = 5  |→ (8) * (5+1=6) * Linear_recursive(5-2=3)      |
        3           m = 3   |→ (8) * (6) * (3+1=4) * Linear_recursive(3-2=1)|skip
        4           m = 1   |→ base case →                                return 10 
    Final x = 8 * 6 * 4 * 10 = 1920
    
    
    
    */




    cout<<"\n -----EXAMPLE1:----"<<endl;
    cheers(5);
    // First call to the recursive function
    /*
    1 | n=5 | false | cout --> 5*2 = 10 | cheers(5-1=4) 
    2 | n=4 | false | cout --> 4*2 = 8 | cheers(4-1=3) 
    3 | n=3 | false | cout --> 3*2 = 6 | cheers(3-1=2) 
    4 | n=2 | false | cout --> 2*2 = 4 | cheers(2-1=1) 
    5 | n=1 | true | stop the recursive function
    */

    cout<<"\n -----EXAMPLE2:----"<<endl;
    int num = getnumber();
    cout << " entered number= " << num << endl;
    

    return 0;
}
