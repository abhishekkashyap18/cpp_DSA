#include <iostream>

int binary_search(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size = 6;
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binary_search(even, size, 20);
    
    std::cout<<"Index of 12 is: "<<index;
    return 0;
}