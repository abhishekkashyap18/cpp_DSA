#include<iostream>
using namespace std;

int pow(int n){
    //base case
    if(n == 0){
        return 1;
    }

    // recursive call
    int ans = 2 * pow(n-1);
    // return ans;
}
 
int main()
{
    int ans = pow(10);
    cout<<ans;
    return 0;
}