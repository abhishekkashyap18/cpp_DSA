#include<iostream>
using namespace std;

int findFirstOccurance(int arr[] , int size , int target){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    int ans = -1;

    while(start <= end){
        //found
        if(target == arr[mid]){
            //ans ko store kara lenge or left me chle jaiyenge
            ans = mid;

            end = mid - 1; // end ko update kar denge.
        }
        else if(target > arr[mid]){
            //start ko update karenge
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }

        mid = (start + end)/2;

    }

    return ans;
}


int findLastOccurance(int arr[] , int size , int target){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    int ans = -1;

    while(start <= end){
        //found
        if(target == arr[mid]){
            //ans ko store kara lenge or right me chle jaiyenge
            ans = mid;

            start = mid + 1; // start ko update kar denge.
        }
        else if(target > arr[mid]){
            //start ko update karenge
            start = mid + 1;
        }
        else if(target < arr[mid]){
            //end ko updat kar denge
            end = mid - 1;
        }

        mid = (start + end)/2;

    }

    return ans;
}
 

int totalOccurance(int arr[] , int size , int target){

    int firstocc = findFirstOccurance(arr , size , target);
    int lastOcc = findLastOccurance(arr , size , target);

    return ((lastOcc - firstocc) + 1);
}

int main()
{
     int arr[] = {10 , 20 , 30 , 30 , 30 , 30  ,30 , 40 , 40 ,40 , 50};
     int size = 11;
     int target = 40;

    cout<<"totalOccurance -> "<<totalOccurance(arr , size , target);
    
    return 0;
}