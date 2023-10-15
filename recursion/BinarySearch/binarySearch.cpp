#include<iostream>
using namespace std;

int binarySearchUsingRecursion(int arr[] , int start , int end , int target){

    
    //base case
    if(start > end) return -1;

    // calculating mid
    int mid = start + (end - start)/2;


    if(arr[mid] == target) return mid;

    //processing & recursive call
    if(arr[mid] > target){
       return binarySearchUsingRecursion(arr , start , mid-1 , target);
    }
    else{
        return binarySearchUsingRecursion(arr , mid+1 , end , target);
    }
}
 
int main()
{
     int arr[] = {21 , 35 , 69 ,71 , 83 , 89};
     int start = 0;
     int size = sizeof(arr)/sizeof(int);
     int end = size - 1;
     int target = 21;

     int ans = binarySearchUsingRecursion(arr , start , end , target);
     cout<<target<<" is present on index -> "<<ans;
    return 0;
}