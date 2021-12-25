#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
int t; 
cin>>t;
while(t){
    int n;
    cin>>n;
    set<int> st;
    int i;
    i=1;
    while(i){
        int sq=i*i;
        if(sq>n) break;
        else st.insert(sq);
        i++;
    }
    i=1;
    while(i){
        int sq=i*i*i;
        if(sq>n) break;
        else st.insert(sq);
        i++;
    }
    cout<<st.size()<<endl;
    t--;
}
return 0;
}