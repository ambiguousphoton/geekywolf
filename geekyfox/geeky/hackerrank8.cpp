#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 38)
        {
            int at = arr[i] / 5;
            at = at + 1;
            at = at * 5;
            if (at - arr[i] < 3)
            {
                arr[i] = at;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << "\n";
    }
}