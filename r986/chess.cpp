#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;
        std::string s;
        std::cin >> s;
        
        int x = 0, y = 0;  // Alice's initial position
        bool meetsQueen = false;
        
        // Check each intermediate position in the first cycle
        for (char move : s) {:wchar_t
            // Update Alice's position based on the current move
            if (move == 'N') y++;
            else if (move == 'S') y--;
            else if (move == 'E') x++;
            else if (move == 'W') x--;

            // Check if there exists an integer multiplier k such that (k * x, k * y) == (a, b)
            if ((x != 0 && (a % x == 0 || x % a == 0)) && (y != 0 && (b % y == 0 || y % b == 0))) {
                if (a / x == b / y) {
                    meetsQueen = true;
                    break;
                }
            } else if (x == 0 && a == 0 && y != 0 && b % y == 0) {
                meetsQueen = true;
                break;
            } else if (y == 0 && b == 0 && x != 0 && a % x == 0) {
                meetsQueen = true;
                break;
            }
        }

        // Output the result for this test case
        if (meetsQueen) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}
