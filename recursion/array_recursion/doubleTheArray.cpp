#include<iostream>
using namespace std;

void doubleArray(int arr[] , int size , int index){
    // Base case
    if(index== size){
        return;
    }

    //processing
    arr[index] = 2*arr[index];

    // recursive call
    doubleArray(arr, size , ++index);
}

 
int main()
{

    int arr[] = {1 ,2  , 3, 4 , 5 , 6};
    int size = 6;
    int index = 0;

     
    //calling function
    doubleArray(arr , size , index);

    for(auto num:arr){
        cout<<num<<" ";
    }
    return 0;
}