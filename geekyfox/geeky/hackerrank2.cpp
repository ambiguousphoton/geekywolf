#include <iostream>
int main()
{
    // input
    int n;
    int d;
    std::cout << "input array size :: ";
    std::cin >> n;
    std::cout << "input no. of left rotations :: ";
    std::cin >> d;
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "arr[" << i << "] :: ";
        std::cin >> arr[i]; // storing the array
        temp[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << ",";
        if ((i + d) < n)
        {
            arr[i] = arr[i + d];
        }
        else
        {
            arr[i] = temp[n - (i + d)];
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }
}