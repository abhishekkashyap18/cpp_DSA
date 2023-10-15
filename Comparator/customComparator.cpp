#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v){
    for(auto num: v){
        cout<<num<<" ";
    }
    cout<<endl;
}

//takes two arguments to compare.
bool customComparator(int &a , int &b){
    return a>b;

}
 
int main()
{
     vector<int> v = {44,55,22,66,11};
     //STL sort function by default sort in increasing order
     sort(v.begin() , v.end());
     cout<<"Before"<<endl;
     printVector(v);

     //to sort in decreasing order or any other order we want to write a custom function known as comparator.it is of bool type.
     sort(v.begin() , v.end() , customComparator);
     cout<<"After using comparator function"<<endl;
     printVector(v);
    return 0;
}