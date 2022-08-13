#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    int ar1[n];
    int ar2[n];
    int p = 0;
    int p1 = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0 ; j<n;j++){
            cin>>temp;
            if(i==j){
                ar1[p] = temp;
                p = p + 1;
            }
            if (i+j+1 ==n){
                ar2[p1] = temp;
                p1 =p1 + 1;
            }
        }
    }
    int total =0;
    int total2= 0;
    for(int i =0; i<n;i++)
    {   total = total +ar1[i];
        // cout<<ar1[i];
    }
        // cout<<" ";
    for(int i = 0; i<n;i++){
        total2 = total2 + ar2[i];
        // cout <<ar2[i];
    }
    
    int answer = total - total2;
    if(answer < 0){
        answer = answer * -1;
    }
    cout<<answer;

}