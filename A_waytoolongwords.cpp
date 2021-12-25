#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
int n;
cin>>n;
string a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    if(a[i].length()<=10) cout<<a[i]<<endl;
    else cout<<a[i][0]<<a[i].length()-2<<a[i][a[i].length()-1]<<endl;
}

return 0;
}