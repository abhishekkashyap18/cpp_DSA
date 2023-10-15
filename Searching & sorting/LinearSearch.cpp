#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int target)
{

    for (int index = 0; index < size - 1; index++)
    {
        if (arr[index] == target)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[7] = {10, 20, 30, 50 ,60, 70, 80};
    int size = 7;
    int target = 40;

    bool isFound = LinearSearch(arr, size, target);

    if (isFound)
    {
        cout <<"Present"<<endl;
    }
    else
    {
        cout <<"Not present"<<endl;
    }

    return 0;
}