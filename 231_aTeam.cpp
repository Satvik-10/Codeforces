#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
int n,count=0;
cin>>n;
while(n>0){
    int vcount=0,ver[3];
    for(int i=0;i<3;i++){
        cin>>ver[i];
    }
    for(int i=0;i<3;i++){
        if(ver[i]==1) vcount++;
        else continue;
    }
    if(vcount>=2) count++;
    n--;
}
cout<<count<<endl;
return 0;
}