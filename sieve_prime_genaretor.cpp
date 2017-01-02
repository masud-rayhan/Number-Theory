#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int N=10000;
    int arr[N]={0};
    int sq=sqrt(N);


    for(int i=4;i<=N;i+=2){
        arr[i]=1;
    }

    for(int i=3;i<=sq;i+=2){
        if(arr[i]==0){
            for(int j=i*i;j<=N;j+=i){
                arr[j]=1;
            }
        }
    }


    arr[0]=1;
    arr[1]=1;



    ///printing loop

    for(int p=0;p<=N;p++){
        if(arr[p]==0){
            cout<<p<<endl;
        }
    }

    return 0;
}
