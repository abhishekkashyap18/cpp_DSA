#include<iostream>
#include<string>
using namespace std;

void stringSubsequence(string str , string output , int index){

    //base case
    if(index >= str.length()){
        // cout<<"-> "<<output<<endl;
        return;
    }

    //processing
    char currCh = str[index];

    //inlcude
    output.push_back(currCh);
    cout<<"inlcuding  "<< output<<endl;
    stringSubsequence(str , output , index+1);

    // cout<<"before excluding  "<<output<<" ";

    //exclude
    output.pop_back();
    cout<<"excluding  "<<output<<endl;
    stringSubsequence(str , output , index+1);

    //exclude
    // stringSubsequence(str , output , index+1);

    // // include
    // //output me charcter ko push kar denge
    // output.push_back(currCh);
    // stringSubsequence(str , output , index+1);
}
 
int main()
{
    string str = "abc";
    string output = "";
    int index = 0;

    stringSubsequence(str , output , index);
     
    return 0;
}