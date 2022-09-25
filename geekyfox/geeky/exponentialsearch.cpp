#include <iostream>
#include <string>

using namespace std;

int take_inp()
{
    int n;

    cout << " Enter the no to search for ::";

    cin >> n;

    return n;
}

int main()
{
    int n;

    cout << "input size of array ::";
    cin >> n;

    int arr[n - 1];

    cout << "input array elements in sorted order ::";

    int inp;

    for (int i = 0; i <= n - 1; i++)

    {
        cout << "element " << i + 1 << " ::";
        cin >> inp;
        arr[i] = inp;
    }

    int a = take_inp();
    int found;
    int len = n - 1;
    int low = (len + 1) - len;
    int high = len;

    while (low <= high)
    {

        int mid = low + high / 2;

        if (arr[mid] == a)
        {
            found = mid;
            break;
        }
        if (arr[mid] < a)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "position of element is ::" << found + 1;

    return 0;
}
