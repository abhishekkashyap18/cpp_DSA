#include<iostream>
using namespace std;

void printOccurence(int arr[] , int size  , int index , int target){
    if(size == index){
        return;
    }

    if(arr[index] == target){
        cout<<index<<" ";
    }

    printOccurence(arr, size ,index+1 , target);
}

 
int main()
{
    int arr[] = {1 , 2 , 3 , 4 , 2 , 2};
    int size = 6;
    int index = 0;
    int target = 2;
     
    printOccurence(arr , size , index , target);

    return 0;
}