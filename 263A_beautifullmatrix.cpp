#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
int x,y;
int a[5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cin>>a[i][j];
        if(a[i][j]==1){
            x=i+1;
            y=j+1;
        }
    }
}
int ans=abs(3-x)+abs(3-y);
cout<<ans;
return 0;
}