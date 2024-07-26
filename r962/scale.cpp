#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    // Declare two 2D vectors (square matrices)
    std::vector<std::vector<int> > matrixN(n, std::vector<int>(n));
    std::vector<std::vector<int> > matrixM(m, std::vector<int>(m));

    // Take input in the matrix of size n
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrixN[i][j];
        }
    }

    // Fill the matrix of size m using elements from matrix of size n
    for (int i = 0; i < n; i+n) {
        for (int j = 0; j < m; ++j) {
            matrixM[i][j] = matrixN[i % n][j % n];
        }
    }

    // Output the matrix of size m
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrixM[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

