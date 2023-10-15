#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printVectorOfVector(vector<vector<int>> &v){
    for(int i=0 ; i<v.size() ; i++){
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}

bool compToSortVofV(vector<int> &a , vector<int> &b){
        // return a[0] < a[1]; //sort based on 0th index 
        return a[1] < b[1];  //sort based on 1st index.
}
 
int main()
{
     vector<vector<int>> v;
     int n;
     cout<<"Enter the size of n";
     cin>>n;

     for(int i=0 ; i<n ; i++){
        int a , b;
        cout<<"enter a , b"<<endl;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
     }

    cout<<endl<<"Here are the values"<<endl;
     printVectorOfVector(v);


    // cout<<"by default 0th index based sorting"<<endl;
    // sort(v.begin() , v.end());

    cout<<"1st index based sorting"<<endl;
    sort(v.begin() , v.end() , compToSortVofV);
    printVectorOfVector(v);
    return 0;
}