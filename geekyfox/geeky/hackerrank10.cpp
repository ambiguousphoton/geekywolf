#include <iostream>
using namespace std;
int main(){
    int x1 , v1, x2, v2;
    cin>> x1 >> v1 >> x2 >> v2;
    string y = "YES";
    string n = "NO";
    int x = x2 - x1;
    if(v1>v2){
        if(x*v2%v1=0){cout<<y;}
        else if(v1>x+v2){
            cout<<n;
        }
        else{cout<<y;}
    }
    if(v2>v1){
        cout<<n;
    }
    
}