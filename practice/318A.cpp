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

    ll arr[n];
    arr[0]=1;
    for(ll i=1; i<mid; i++){
        arr[i]=arr[i-1]+2;
    }
    arr[mid]=2;
    for(ll j=mid+1; j<n; j++){
        arr[j] = arr[j-1]+2;
    }
    cout<<arr[k-1];
}

