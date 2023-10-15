#include<iostream>
using namespace std;
 
int main()
{
     //pointer->variables->to store addess of other variables.
    //  int a = 5;
    //  int* ptr = &a;    // address of a ko ptr pointer me store kar liya.
     //int* pointer_name -> pointer to a int variable.

    //  cout<<"address of a using address of operator-> "<<&a<<endl;   // 0x61ff08
    //  cout<<"address of a using pointer-> "<<ptr<<endl<<endl;                    // 0x61ff08
     //address is a hexa-decimal value.


    // <---accessing value of "a" using pointer--->.
    //  cout<<"a is -> "<<a<<endl; //5
    //  cout<<"a is -> "<<*ptr<<endl;;    //5   (* is a dereference operator gives value of a variable whose address is stored in a pointer).


     //BAD PREACTISE - ALWAYS AVOID THIS.
    //  int* p; //pointer is declared but not initialzed -> pointer p store a gabage value which is an illegal address and when we try to access this illegal address we will may an error -> it's purely compiler independent. 
    //  cout<<*p<<endl;

    // int* p = 0; //null pointer -> it's better to use null pointer than uninitialized pointer.



    //  <--- SIZE OF POINTER--->

    //size of pointer is system independent -> but in most cases it returns 8.
    // pointers size is independent of data type of a variables. 
    //it's same for every data type.
    // cout<<sizeof(ptr);   //4 

    cout<<endl<<endl;

    // <-- few mcqs related questions -->
    int x = 3;
    int a = 5;
    int c = 6;
    int d = 8;

    // int* point = x;  --> ERROR - point is a pointer to x which will always store address. but x is a integer value not a address.
    int* point = &x;  

    // cout<<"x-> "<<x<<endl;                       //3
    // cout<<"&x-> "<<&x<<endl;                     // address of x
    // // cout<<"*x-> "<<*x<<endl;   --> *x will give error bcoz "x" is a it variable not a pointer , so it cannot be dereferenced.
    // cout<<"point-> "<<point<<endl;               // address of x
    // cout<<"*point-> "<<*point<<endl;             //value of x - 3
    // cout<<"&point-> "<<&point<<endl;             //address of pointer "point"
    // cout<<"(*point)+1-> "<<(*point)+1<<endl;     //4
    // cout<<"++(point)-> "<<++(point)<<endl;      // "address of x" + "size of datatype".
    // cout<<*point<<endl;                         // " d" -> 8
    // cout<<"*point = *point/2-> "<< (*point)/2<<endl;     //"d"/2 = 4
    // cout<<"*point = *point-2-> "<<(*point)-2<<endl<<endl<<endl;   //"d" - 2 = 6

    //whenever a pointer is incremented it will points to a last initialized variable.
    //for example in above case -> "point" pointer is pointing to "x" variable but after "++(point)", it starts pointing to d which is the last initialized variable.


    // <----POINTER WITH ARRAYS----->
    int arr[] = {1,2,3,4,5,6,7};

    // cout<<"arr -> "<<arr<<endl;                  //Base address of array
    // cout<<"arr + 1 -> "<<arr+1<<endl;            // "BaseAddress" + "size of datatype"
    // cout<<"*arr -> "<<*arr<<endl;                //value stored at 0th index - arr[0].
    // cout<<"*(arr + 1) -> "<<*(arr + 1)<<endl;   //2
    // cout<<"*arr + 10 -> "<<*arr + 10<<endl;     //11

    // *(arr + 1) -> 1st index value (1);
    // *(arr + 2) -> 2nd index value(2);
    // *(arr + 3) -> 3rd index value(3);
    // *(arr + i) --> ith index ki value --> arr[i] (we can also represent it as i[arr] )


    // <----CHARACTER ARRAYS---->
    char ch[] = {'a' , 'b' , 'c'};

    cout<<ch<<endl; //abc
    cout<<&ch;
    
   



    return 0;
}