#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        int n=s.size(),count=0;
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                if(s[i]==s[i+n/2]) count++;
            }
            if(count==n/2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }

return 0;
}