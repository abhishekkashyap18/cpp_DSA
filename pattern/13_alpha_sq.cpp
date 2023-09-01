#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int row = 1;
    char count  = 'A';

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            std::cout << " " << count;
            count = count + 1;
            col = col + 1;
        }
        std::cout << "\n";
        row = row + 1;
    }
}