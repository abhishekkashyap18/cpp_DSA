#include<iostream>
using namespace std;

void shiftElementBY1(int arr[] , int size){
    int temp = arr[size - 1];
    int i=size-2;
    int j = size-1;

    while(i>=0){
        
        arr[j] = arr[i];

        if(i==0){
            arr[i] = temp;
            break;
        }
        
        i--;
        j--;
    }
}

void printArray(int arr[] , int  size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    
}
 
int main()
{
     int arr[] = {10 , 20 ,30 ,40 , 50 , 60};
     int n = 6;

     shiftElementBY1(arr , n);

     printArray(arr , n);

    return 0;
}