#include<iostream>

int main(){
    int n;
    std::cin>>n;

    int i = 1;

    while(i<=n){

        int j = 1;

        while(j<=n){
            std::cout<<" "<<j;
            j = j+1;
        }
        i = i+1;
        std::cout<<"\n";

    }


}