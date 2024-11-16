#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input, n;
    cin >> input;

    while (input-- > 0) {
        cin >> n;
        vector<int> h(n);  

        for (int i = 0; i < n; i++) {
            cin >> h[i]; 
        }

        int count = 0; 

        for (int i = 0; i < n - 1; i++) {
            if (h[i] > h[i + 1]) {
                count++;
            }
        }

        cout << count << '\n';  
    }

    return 0;
}
