#include<bits/stdc++.h>
#define ll long long
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    FAST_IO;

    // no if the length is 7 or less
    // convert string to stray
    // brute force:
    //  if strr[i]==str[i-1] count++
    //  else count=1;

    string str;
    cin >> str;

    if(str.length()<=7){
        cout<<"NO"<<'\n';
        return 0;
    }


    int count=1;
    for(size_t i=1; i<str.length(); i++){
        if(str[i]==str[i-1]){
            count++;
            if(count==7){
                cout<<"YES"<<'\n';
                return 0;
            }
        }else{
            count=1;
        }
    }
    cout << "NO"<<'\n';
    return 0;
}

