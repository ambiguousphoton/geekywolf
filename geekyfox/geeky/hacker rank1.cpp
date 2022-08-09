#include <iostream>

int main()
{
    int size;

    std::cin >> size;
    int A[size];
    for (int i = 0; i <= size; i++)
    {
        std::cin >> A[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        std::cout << A[i] << " ";
    }

    return 0;
}