/// Stair case pattern - problems
#include <iostream>
int main()
{
    int inp, temp;
    std::cin >> inp;
    for (int i = 1; i <= inp; i++)
    {

        for (int j = 1; j <= inp - i; j++)
        {
            std::cout << " ";
            temp = j;
        }
        for (int k = 1; k <= i; k++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}