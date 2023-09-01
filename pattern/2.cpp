#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            std::cout <<" "<< count;
            count = count + 1;
            j = j + 1;
        }

        std::cout << "\n";
        i = i + 1;
    }
}