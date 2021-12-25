#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
int n,x=0;
cin>>n;
while (n>0)
{
    string s;
    cin>>s;
    if(s=="X++") x++;
    if(s=="X--") x--;
    if(s=="++X") ++x;
    if(s=="--X") --x;
    n--;
}
cout<<x;
return 0;
}