#include <iostream>
int main(){
    int n;
    std::cin >> n ;
    int arr[n];
    int pos = 0;
    int neg = 0;
    int zero =0;
    for(int i = 0; i < n ; i++){
        std::cin>>arr[i];
        if(arr[i] > 0 ){pos = pos + 1;     }
        if(arr[i]<0){neg  = neg + 1;}
        if(arr[i]==0){zero = zero +  1;}
    } 
    float n1 = n;

    float p_pos = float(pos) / n1;
    float p_neg = float(neg) / n1;
    float p_zero = float(zero) / n1;

    std::cout<<p_pos<<"\n"<<p_neg<<"\n"<<p_zero;
    // int ps[pos] ;
    // int ng[neg] ;
    // int zer[zero];
    // int pt,nt,zt = 0;
    // for(int i= 0;i <n ; i++){
    //     if(arr[i]>0){
    //         ps[pt] = arr[i];
    //         pt++;
    //     }
    //     else if(arr[i]<0){
    //         ng[nt] = arr[i];
    //         nt++;           
    //     }
    //     else{
    //         zer[zt] =arr[i];
    //         zt++;
    //     }

    // }
        
}