class Solution {
public:
    int uniquePaths(int m, int n) {
        // 1. initialize 2D matrix
        int grid[n][m];
        
        // 2. cover base cases        
        for (int i = 0; i < n; ++i) {
            // a) top row initialization
            grid[i][0] = 1;
        }
        
        for (int j = 0; j < m; ++j) {
            // b) left column initialization
            grid[0][j] = 1;
        }
        
        // 3. iterate to fill in the grid
        for (int l = 1; l < m; ++l) {
            for (int k = 1; k < n; ++k) {
                grid[k][l] = grid[k-1][l] + grid[k][l-1];
            }
        }
        
        return grid[n-1][m-1];
    }
};
