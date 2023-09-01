#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;

  // outer Loop
  for (int row = 0; row < n; row++) {
    // inner Loop-- for spaces
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    // loop for starts
    for (int col = 0; col < (n - row); col++) {
      cout << "* ";
    }
    cout << endl;
  }
}
