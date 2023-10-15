#include<iostream>
#include<string.h>
using namespace std;

void LowerTouppercase(char ch[] , int size){
    int index = 0;

    while(ch[index] != '\0'){
        char currcharacter = ch[index];
        if(currcharacter >= 'a' && currcharacter <= 'z'){
            ch[index] = currcharacter -'a' + 'A';
        } 
        index++;
    }
}


// function for replace '@' with spaces
void replaceSpecialCharacterWithSpace(char ch[] , int size){
    int index = 0;

    while(ch[index] != '\0'){
        char currIndex = ch[index];
        if(currIndex == '@'){
            ch[index] = ' ';
        }
        index++;
    }

}
 
int main()
{
     char ch[100];
     cin.getline(ch , 100);

     int size = strlen(ch);
    //  LowerTouppercase(ch , size);
     replaceSpecialCharacterWithSpace(ch , size);

     cout<<ch;
    return 0;
}