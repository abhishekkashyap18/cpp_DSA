#include<iostream>
#include<stack>
using namespace std;

void ReverseString(stack<char> &st , string& s){
    //string me se value nikali or stack me push kar di
    int i=0;
    while(i<s.length()){
       char ch = s[i++];
       st.push(ch);
    }

    //stack me se value nikali or string me push kardi.
    i = 0;
    while(!st.empty()){
       s[i++] = st.top();
       st.pop();
    }
}
 
int main()
{
    stack<char> st;
    string s = "Babbar";

    cout<<s<<endl;

    ReverseString(st , s);

    cout<<s<<endl;
     
    return 0;
}