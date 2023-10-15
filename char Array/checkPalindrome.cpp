#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(char ch[] , int size){
    int i = 0;
    int j = size -1;

    while(i <= j){
        if(ch[i] != ch[j]){
            return false;
        }
        i++ ;
        j--;
    }

    return true;

}
 
int main()
{
     char ch[100];
     cin>>ch;
     
     int size = strlen(ch);

     bool status = isPalindrome(ch , size);

    if( status ){
        cout<<"valid palindrome"<<endl;
    }
    else{
        cout<<"unvalid palindrome"<<endl;
    }


    //  cout<<ch;
    return 0;
}
