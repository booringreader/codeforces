#include<bits/stdc++.h>
#define ll long long
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

bool desc(int a, int b){
    return a > b;
}

int main(){
    FAST_IO;
    int n, count=0, sum=0;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), desc);
    
    sum = accumulate(arr.begin(), arr.end(), 0);
    int temp_sum = 0;
    for(int i=0; i<n; i++){
        temp_sum += arr[i];
        count++;
        if(temp_sum > sum/2){
            break;
        }
    }
    cout << count << '\n';
}

