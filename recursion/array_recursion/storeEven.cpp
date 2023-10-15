#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// function to store even number
void storeEven(int arr[] ,int size , int index ,  vector<int>& ans){
    //Base case
    if(index >= size){
        return;
    }

    // processing
    if(arr[index]%2 == 0){
        ans.push_back(arr[index]);
        // cout<<arr[index]<<" ";
    }

    //recursive relation
     storeEven(arr , size , index+1 , ans);
}

 
int main()
{

    int arr[] = {105,2,3,105,5,6,105,10,90};
    int size = 9;
    int index = 0;
    // vector<int> ans;
    int ans = INT_MIN;
    int target = 105;

    // storeEven(arr , size , index , ans);

    // for(auto num: ans){
    //     cout<<num<<" ";
    // }

    // doubleArray(arr , size , index);

    // for(auto num:arr){
    //     cout<<num<<" ";
    // }

    // maxNumber(arr , size , index , ans);

    // cout<<ans;

    // printOccurence(arr , size , index , target);

    printDigit(4215);
     
    return 0;
}