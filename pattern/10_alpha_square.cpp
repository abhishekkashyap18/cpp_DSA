#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {

            char ch = 'A' + row + col - 2; //typecasting into charater
            std::cout << " " << ch;
            col = col + 1;
        }
        std::cout << "\n";
        row = row + 1;
    }
}