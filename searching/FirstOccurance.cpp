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

int main()
{
     int arr[11] = {10 , 20 , 30 , 30 , 30 , 30 , 40 , 40 ,40 , 40 , 50};
     int size = 11;
     int target = 70;

     int index = findFirstOccurance(arr , size , target);

     if(index >= 0){
        cout<<"first occurance of "<<target<<" is -> "<<index<<endl;
     }
     else{
        cout<<"not found"<<endl;
     }
    return 0;
}
