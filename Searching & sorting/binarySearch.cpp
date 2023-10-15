#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int target){
    int start = 0;
    int end = size - 1;

    int mid = (start+end)/2;

    while(start <= end){
        
        //found
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            //left part ko neglect kar dengey in increasing order , start ko update kar denge
            start = mid + 1; 
        }
        else if(target < arr[mid]){
            //right part ko neglect kar dengey in increasing order , end ko update kar denge
            end = mid - 1;
        }

        // at last mid ko update karna bhoolna nahi hai
        mid = (start + end)/2;
    }

    return -1;
}
 
int main()
{
     int arr[8] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80};
     int size = 8;
     int target = 5;

     int index = BinarySearch(arr , size , target);

     cout<<"target "<<target<<" is present on index -> "<<index<<endl;
    return 0;
}