#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  int num = n / 2;

  //For full pyramid
  for (int row = 0; row < num; row++) {

    for (int col = 0; col < (num - row - 1); col++) {
      cout << " ";
    }
    for (int col = 0; col < row + 1; col++) {
      cout << "* ";
    }
    cout << endl;
  }

  //For Inverted full Pyramid
  // outer Loop
  for (int row = 0; row < num; row++) {
    // inner Loop-- for spaces
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    // loop for starts
    for (int col = 0; col < (num - row); col++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
