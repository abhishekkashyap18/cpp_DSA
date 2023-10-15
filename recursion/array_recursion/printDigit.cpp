#include<iostream>
#include<vector>
using namespace std;

void printDigit(int n , vector<int>& ans){
    //base case
    if(n == 0) return ;

    // processing
    int digit = n%10;
    n = n/10;

    // recursive call
    printDigit(n , ans);


    //processing
    // cout<<digit<<" ";
    ans.push_back(digit);
    

}
 
int main()
{

    int value = 87690;
    vector<int> ans;
    
    printDigit(value , ans);

    for(auto num: ans){
        cout<<num<<" ";
    }

    
     
    return 0;
}