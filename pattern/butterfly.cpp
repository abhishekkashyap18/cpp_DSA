#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    //FOR UPPER HALF
    //outer loop
    for(int row=0; row<n; row++){
        //for half pyramid
        for(int col=0; col<(row+1); col++){
            cout<<"* ";
        }
        
        // for full inverted pyramid
        for(int col=0; col<((2*n)-(2*row)-2); col++){
            cout<<"  ";
        }
        
        // for half pyramid
        for(int col=0; col<(row+1); col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    // FOR LOWER HALF
    // outer loop
    for(int row=0; row<n; row++){
        //for inverted pyramid
        for(int col=0; col<(n-row); col++){
            cout<<"* ";
        }
        
        // for full pyramid
        for(int col=0; col<(2*row); col++){
            cout<<"  ";
        }
        
        // for half pyramid
        for(int col=0; col<(n-row); col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}
