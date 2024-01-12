#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st , int &pos , int &ans){

    //base case
    if(pos == 1){
        ans = st.top();
        cout<<"Middle Element is: "<<ans<<endl;;
        return;
    }

    //
    pos--;
    int temp = st.top();
    st.pop();

    solve(st , pos , ans);

    st.push(temp);
}

int getMiddleElement(stack<int> &st){
    int size = st.size();
    if(st.empty()){
        return -1;
    }
    else{
        int pos = size/2 + 1;;
        return pos;
    }
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

    //  st.push(10);
    //  st.push(20);
    //  st.push(30);
    //  st.push(40);
    //  st.push(50);
    //  st.push(60);

    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);


    int ans = 0;
     int MiddlePosition = getMiddleElement(st);
     solve(st , MiddlePosition , ans);

     printStack(st);


    return 0;
}