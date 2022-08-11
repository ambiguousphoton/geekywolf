#include <iostream>
#include <cstdint>
int main()
{
    std::int64_t arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }
    std::int64_t max = 0;
    std::int64_t min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::int64_t sum = 0;
    std::int64_t maxsum = 0;
    std::int64_t minsum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    minsum = sum - max;
    maxsum = sum - min;
    std::cout << minsum << " " << maxsum;
}