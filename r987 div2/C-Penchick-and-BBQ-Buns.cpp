#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> result(n, -1); // Result array initialized to -1
        vector<bool> filled(n, false); // Tracks which positions are filled

        int current_fill = 1; // Start with filling number 1
        bool possible = true;

        for (int i = 0; i < n; ) {
            if (filled[i]) { // If the current position is already filled, move forward
                i++;
                continue;
            }

            bool filled_twice = false;
            result[i] = current_fill;
            filled[i] = true;

            // Try to find a position at a perfect square distance
            for (int k = 1; k * k < n; ++k) {
                int next_pos = i + k * k;
                if (next_pos < n && !filled[next_pos]) {
                    result[next_pos] = current_fill;
                    filled[next_pos] = true;
                    filled_twice = true;
                    break;
                }
            }

            if (!filled_twice) {
                // If we cannot place the filling twice, it's impossible
                possible = false;
                break;
            }

            current_fill++; // Move to the next filling number
        }

        if (!possible) {
            cout << -1 << '\n';
        } else {
            for (int x : result) {
                cout << x << " ";
            }
            cout << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
