#include<iostream>
#include<stack>
using namespace std;
 
int main()
{
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    //size check
    cout<<"size of stack is: "<<st.size()<<endl;

    //remove
    st.pop();
    st.pop();
    st.pop();

    if(st.size()){
        cout<<"stack is NOT EMPTY"<<endl;
    }
    else{
        cout<<"stack is EMPTY"<<endl;
    }
     
    return 0;
}