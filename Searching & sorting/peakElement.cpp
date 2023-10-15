#include<iostream>
using namespace std;

int findPeakElement(int arr[] , int size ){
    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start)/2);

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            // A wali line p hai , peak element right side hoga
            start = mid + 1;
        }
        else{
            // ya to peak element hai ya B wali line p hai. end ko update karenge.
            end = mid ; //mid -1 issliye nahi kara taaki mid ka track rakh sake.
        }

        mid = start + ((end - start)/2);
    }

    return start;
}
 
int main()
{
     int array[] = { 10 , 20 , 50 , 40 , 30 };
     int size = 5;
     int peakElem = findPeakElement(array , size);

     cout<<"peak element is -> "<<peakElem<<endl;
    return 0;
}