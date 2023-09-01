#include<iostream>

int main(){
    int n;
    std::cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A'+row-1;
        while(col<=row){
            std::cout<<" "<<ch;
            col = col+1;
        }
        std::cout<<"\n";
        row = row+1;
    }
}