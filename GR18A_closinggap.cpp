/**#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t>0){
    ll n;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(a[j]>a[i]){
                if(abs(a[i]-a[j])>1){
                a[i]+=1;
                a[j]-=1;
                }
            }
        }
    }
    sort(a,a+n);
    int ans=a[n-1]-a[0];
    cout<<ans<<endl;
    t--;
}
return 0;
}**/
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<cstring>
#define ll long long
using namespace std;

int main(){
ll t;
cin>>t;
while(t>0){
    ll n;
    cin>>n;
    int a[100];
    ll sum=0;
    for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    }
    cout<<(ceil((double)sum/n))-(sum/n)<<endl;
    t--;
}
return 0;
}

