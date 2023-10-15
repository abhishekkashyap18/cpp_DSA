#include<iostream>
using namespace std;


int findMissingNumber(int arr[] , int size){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + ((end - start)/2);
    while(start <= end){
        int diff = arr[mid] - mid;
        if(diff == 1){
            start = mid + 1;
        }
        else{
            // ans ko store kara lenge
            ans = arr[mid];
            
            // left hai jaiyenge
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }

    int final_ans = ans - 1;
    return final_ans;
}

 
int main()
{
     int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
     int size = 8;
      
    int MissingNum = findMissingNumber(arr , size );
    cout<<"missingNUmber is -> "<<MissingNum<<endl;
    return 0;
}