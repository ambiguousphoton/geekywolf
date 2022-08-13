#include <iostream>
using namespace std;
int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int mu[m];
    int nu[n];
    int apple_counter = 0;
    int orange_counter = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> mu[i];
        int ds = mu[i] + a;
        if (ds >= s and ds <= t)
        {
            apple_counter++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> nu[i];
        int dis = nu[i] + b;
        if (dis >= s and dis <= t)
        {
            orange_counter++;
        }
    }
    cout << apple_counter << "\n"
         << orange_counter;
    // int size = (s - t) * -1;
    // int arr[size + 1];
    // for(int i=0; i<=size; i++){
    //     arr[i] = s + i ;
    //     cout << arr[i] <<" " ;
    // }
}