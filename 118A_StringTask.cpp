#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
string s,s1;
cin>>s;
int count=s.size();
for (int i = 0; i < count; i++)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
        continue;
    }
    else {
        s1+='.';
        s1+=tolower(s[i]);
    }
}
cout<<s1;
return 0;
}