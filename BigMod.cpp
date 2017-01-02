#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int BigMod(int B,int P,int M){
    if(P==0){
        return 1;
    }


    else if(P%2==1){
        int part1=B;
        int part2=BigMod(B,P-1,M);

        return ((part1%M)*(part2%M))%M;
    }



    else if(P%2==0){
        int X=BigMod(B,P/2,M);
      //int Y=BigMod(B,P/2,M);        //WE CAN SKIP THIS LINE,CAUSE HERE X==Y

        return   ((X%M)*(X%M))%M;
    }

}




int main()
{
    int B,P,M  ;         //B=base, P=power,M=mod
    cin>>B>>P>>M;
    cout<<BigMod(B,P,M)<<endl;
    return 0;
}
