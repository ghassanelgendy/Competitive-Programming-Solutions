#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
 
int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> puzzles(m);
    for (int i = 0; i < m; i++) {
        std::cin >> puzzles[i];
    }
    std::sort(puzzles.begin(), puzzles.end());
    int min_diff = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        int diff = puzzles[i + n - 1] - puzzles[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    std::cout << min_diff << std::endl;
    return 0;
}