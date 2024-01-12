#include<iostream>
#include<stack>
using namespace std;

void pushElementSortedly(stack<int> &st , int element){
    //base case
    if(st.empty() || st.top() < element){
        st.push(element);
        return;
    }

    //1 case solve kar do
    int temp = st.top();
    st.pop();

    //recursion samhaal lega
    pushElementSortedly(st , element);

    //backtracking
    st.push(temp);
}

void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }
    cout<<endl;
}

void sortStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }

    //1 case sovle kar do
    int temp = st.top();
    st.pop();

    //recursion
    sortStack(st);

    //backtracking
    pushElementSortedly(st , temp);

}
 

int main()
{
    stack<int> st;
    st.push(11);
    st.push(5);
    st.push(12);
    st.push(7);
    st.push(10);
     
    // sortStack(st);
    // printStack(st);
    // pushElementSortedly(st , 35);
    // printStack(st);

    printStack(st);

    sortStack(st);

    printStack(st);

    return 0;
}