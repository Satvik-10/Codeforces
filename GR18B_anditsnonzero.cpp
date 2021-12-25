#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int N=(int)2e5+10;
int pre[20][N];

int main(){
    for (int i = 0; i < 20; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            pre[i][j]=pre[i][j-1];
            if(!((j>>i)&1)) pre[i][j]++;
        }
        
    }
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        int res=r-l+1;
        for (int i = 0; i < 20; i++)
        {
            res=min(res,pre[i][r]-pre[i][l-1]);
        }
        cout<<res<<endl;
        
    }
    

return 0;
}
