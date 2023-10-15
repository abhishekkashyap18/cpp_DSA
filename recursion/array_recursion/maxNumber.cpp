#include<iostream>
#include<limits.h>
using namespace std;

void maxNumber(int arr[] , int size , int index , int& ans){
    //base case
    if(size == index){
        return ;
    }

    // processing
    ans = max(arr[index] , ans);

    //recursive call
    maxNumber(arr , size , index+1 , ans);

}

 
int main()
{
    int arr[] = {1,2,3,4,5,90};
    int size = 6;
    int index = 0;
    int ans = INT_MIN;

    maxNumber(arr , size , index , ans);

    cout<<ans<<endl;
     
    return 0;
}