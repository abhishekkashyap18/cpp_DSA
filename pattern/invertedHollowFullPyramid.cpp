#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  // outer Loop
  for (int row = 0; row < n; row++) {
    // inner Loop-- for spaces
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    // loop for starts
    for (int col = 0; col < (n - row); col++) {
      if(col==0 || col==(n-row-1)){
        cout << "* ";
      }
      else{
        cout<<"  ";
      }
      
    }
    cout << endl;
  }
  return 0;
}

