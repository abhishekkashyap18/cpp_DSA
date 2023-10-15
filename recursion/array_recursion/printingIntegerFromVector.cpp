#include<iostream>
using namespace std;

int createNumberFromArray(int arr[] , int size , int index , int& ans){
    //base case
    if(index == size) return ans ;

    //processing
    ans = ans*10 + arr[index];

    //recursive call
    return createNumberFromArray(arr , size , ++index , ans);
}
 
int main()
{
     int arr[] = {4 , 5 , 7, 1};
     int size = 4;
     int index = 0;
     int ans = 0;

     createNumberFromArray(arr , size , index , ans);

     cout<<ans;
    return 0;
}