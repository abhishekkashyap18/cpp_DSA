#include<iostream>
using namespace std;

int  searchNearlySorted(int arr[] , int size , int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(mid-1 >=0 && arr[mid-1] == target){
            return mid - 1;
        }

        if(arr[mid] = target){
            return mid;
        }
        if(mid+1 < size && arr[mid+1] == target){
            return mid + 1;
        }

        if(arr[mid] < target){
            //right me jao
            s = mid + 2;
        }

        if(arr[mid] > target){
            //left me jao
            e = mid - 2;
        }

        mid = s + (e - s )/2;
    }
    return -1;
}
 
int main()
{
     int arr[] = {20,10,30,50,40,70,60};
     int n = 7;
     int target = 70;

     int index = searchNearlySorted(arr , n , target);

     if(index){
        cout<<"Not found"<<endl;
     }
     else{
        cout<<"Found : "<<index<<endl;
     }

    return 0;
}