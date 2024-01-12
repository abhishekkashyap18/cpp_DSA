#include<iostream>
#include<stack>
using namespace std;

void insertAtBottomOfStack(stack<int> &st , int element){
    if(st.empty()){
        st.push(element);
        return;
    }

    //1 case solve kar denge
    int temp = st.top();
    st.pop();


    //recursion samhaal lega
    insertAtBottomOfStack(st , element);

    //backtracking
    st.push(temp);
}

void reverseStackUsingRecursion(stack<int> &st){
    if(st.empty()){
        return;
    }

    //1 case solve kar denge
    int temp = st.top();
    st.pop();

    //recursion samhaal lega
    reverseStackUsingRecursion(st);

    //backtracking
    insertAtBottomOfStack(st , temp);
}

void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }
    cout<<endl;
}
 
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printStack(st);
    reverseStackUsingRecursion(st);
    printStack(st);
     
    return 0;
}