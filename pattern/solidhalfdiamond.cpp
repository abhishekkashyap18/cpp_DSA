#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int num = n/2;
// 	cout<<ceil(num)<<endl;
	
	
	
// 	HALF PYRAMID
	//outer loop
	for(int row=0; row<num+1; row++){
	    //inner loop
	    for(int col=0; col<(row+1); col++){
	        cout<<"* ";
	    }
	    cout<<endl;
	}
	
// HALF INVERTED PYRAMID
   //outer loop
   for(int row=0; row<(num); row++){
       //inner loop 
       for(int col=0; col<(num-row); col++){
           cout<<"* ";
       }
       cout<<endl;
   }
	return 0;
}
