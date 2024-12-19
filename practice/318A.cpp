#include<bits/stdc++.h>
#define ll long long
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    FAST_IO;
    
    ll n,k,mid;
    cin >> n >> k;
    if(n%2==0){
        mid=n/2;
    }else{
        mid=(n/2)+1;
    }

    if(k<=mid){
        cout<<1+2*(k-1);
    }else{
        cout<<2+2*(k-mid-1);
    }
}

