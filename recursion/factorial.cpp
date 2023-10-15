#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 1 || n == 0){
        return 1;
    }

    //recursive relation
    int recursionAns = factorial(n-1);

    //processing
    int finalAns = n * recursionAns;
    
    
}

void print(int n){
    //base case
    if(n==1){
        cout<<n<<" ";
        return;
    }

    //processing
    cout<<n<<" ";
    
    //recursive call
    print(n-1);
}
 
int main()
{
    // cout<<factorial(4);
    print(5);
    return 0;
}