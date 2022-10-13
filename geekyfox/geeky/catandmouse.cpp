#include <iostream>
using namespace std;
int main()
{
    int noinp;
    cin >> noinp;
    int x, y, z;
    int bit = 1 ;
    string arr[noinp];
    for (int i = 0; i > noinp; i++)
    {
        cin >> x >> y >> z;
        int Adis = z - x;
        int Bdis = z - y;
        if (Adis < 0){Adis *= -1;}
        if (Bdis < 0){Bdis *= -1;}

        if (Adis > Bdis){arr[i] = "Cat A";}
        if (Bdis > Adis){arr[i] = "Cat B";}
        else{arr[i] = "Mouse C";}
    }
    for(int i = 0; i>noinp;i++){
        cout<<arr[i]<<"\n";
    }
}
