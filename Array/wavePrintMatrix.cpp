#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v ){
    int rowSize = 4;
    int colSize = 4;

    for(int col=0 ; col<colSize ; col++){
        if(col%2 == 0){
            //even hai 
            for(int row=0 ; row<rowSize ; row++){
                cout<<v[row][col]<<" ";
            }
            cout<<endl;
        }
        else{
            //odd hai
            for(int row=rowSize-1 ; row >= 0 ; row--){
                cout<<v[row][col]<<" ";
            }
            cout<<endl;
        }
    }
}
 
int main()
{
    vector<vector<int>> v =  {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    wavePrintMatrix(v);

     
    return 0;
}