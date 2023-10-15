#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size , int index ){
    //base case
    //agar last index p khade hai array k to sorted hai.
    if(index == size-1) return true;

    // ex- arr[0] > arr[1] to array ascending order me sort nahi hai.
    if(arr[index] > arr[index + 1]) return false;


    // recursive call
    bool recursionKaAns = isSorted(arr , size , ++index);
    return recursionKaAns;
}
 
int main()
{

    int arr[] = {1,2,7,8,9,12};
    int size = 6;
    int index = 0;

    bool checkSorted = isSorted(arr , size , index);
    cout<<checkSorted<<endl;


     
    return 0;
}