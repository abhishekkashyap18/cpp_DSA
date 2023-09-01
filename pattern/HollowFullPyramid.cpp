#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  // int num = n / 2;

  //For full pyramid
  for (int row = 0; row < n; row++) {

    for (int col = 0; col < (n - row - 1); col++) {
      cout << " ";
    }
    for (int col = 0; col < row + 1; col++) {
      if(col==0 || col==row){
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
