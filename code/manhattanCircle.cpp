#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>

int main() {
    int t;
    std::cin>>t;
    while(t--){
        int n, m;
    std::cin >> n >> m;
    std::vector<std::string> grid(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> grid[i];
    }
    // Initialize variables to find the max row and column
    int maxRCount = 0;
    int maxRIdx = 0;
    int maxCCount = 0;
    int maxCIdx = 0;
    // Find the row with the maximum number of '#'
    for (int i = 0; i < n; ++i) {
        int currentRowCount = 0;
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                currentRowCount++;
            }
        }
        if (currentRowCount > maxRCount) {
            maxRCount = currentRowCount;
            maxRIdx = i;
        }
    }
    // Find the column with the maximum number of '#'
    for (int j = 0; j < m; ++j) {
        int currentColCount = 0;
        for (int i = 0; i < n; ++i) {
            if (grid[i][j] == '#') {
                currentColCount++;
            }
        }
        if (currentColCount > maxCCount) {
            maxCCount = currentColCount;
            maxCIdx = j;
        }
    }
    // Output the 1-based indices of the row and column with the maximum number of '#'
    std::cout << (maxRIdx + 1) << " " << (maxCIdx + 1) << std::endl;
    }
    return 0;
}