#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=1000;
    int arr[n]={0};
    int sq=sqrt(n);
    for(int i=4;i<=n;i+=2){
        arr[i]=1;
    }

    for(int i=3;i<=sq;i+=2){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                arr[j]=1;
    }
        }
    }

    for(int i=0;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
