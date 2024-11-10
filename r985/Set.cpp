#include <iostream>

int main() {
    long long n, l, r, k;
    std::cin >> n;
    while (n-- > 0) {
        std::cin >> l >> r >> k;
        std::cout << ((r / k) < l ? 0 : (r / k) - l + 1) << std::endl;
    }
}
