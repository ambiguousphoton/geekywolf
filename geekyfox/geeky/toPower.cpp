#include <iostream>

int toPower(int x, int y)
{
    int temp = 1;
    int i = y;
    for (i <= 0; i--;)
    {
        temp = temp * x;
    }
    return temp;
}
int main()
{
    int x, y;
    std::cout << "INPUT x and y to get x^y " << std::endl
              << "input : x = ";
    std::cin >> x;
    std::cout << std::endl
              << "input : y = ";
    std::cin >> y;
    int output = toPower(x, y);
    std::cout << "output = " << output;
    return 0;
}
