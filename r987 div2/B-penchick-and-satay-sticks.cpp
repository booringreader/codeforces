#include <bits/stdc++.h>
using namespace std;

bool bubbleSort(int arr[], int size){
    bool swapped;
    do{
        swapped = false;
        for (int i = 1; i < size-1; ++i){
            if(abs(arr[i] - arr[i + 1]) > 1){
                return false;
            }
            if (arr[i] > arr[i + 1] && abs(arr[i] - arr[i + 1]) == 1){
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // Reduce the range for the next pass
        size--;
    } while (swapped);

   return true; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input, n, count = 0;
    cin >> input;

    while (input-- > 0){
        cin >> n;
        int *h = new int[n + 1];

        for (int i = 1; i < n + 1; i++){
            cin >> h[i];
        }

        cout << (bubbleSort(h, n+1) ? "YES" : "NO") << '\n';
    }
}
