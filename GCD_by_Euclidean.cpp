
//greatest common divisor

#include<iostream>
#include<bits/stdc++.h>

using namespace std;




//The Euclidean Algorithm

int GCD(int a,int b){
    if(a<b){
        return GCD(b,a);
    }
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}



int main()
{
    int a,b;

    while(cin>>a>>b){
        cout<<GCD(a,b)<<endl;
    }

}
