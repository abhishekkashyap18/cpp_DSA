#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    //i = no. of rows.
    int i = 1;

    while (i <= n)
    {
        int j = 1; // j = no. of column
        while (j <= i)
        {
            std::cout << " "<<"*";
            j = j + 1;
        }
        std::cout << "\n";
        i = i + 1;
    }
}