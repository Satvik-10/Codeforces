#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
int n;
cin>>n;
string s;
cin>>s;
int count=s.length();
int ans=0;
for (int i = 0; i < count; i++)
{
    if (s[i]==s[i+1])
    {
       ans++; 
    } 
}
cout<<ans<<endl;
return 0;
}