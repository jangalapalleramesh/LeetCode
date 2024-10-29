class Solution {
public:
    int sol(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& memo) {
        // Check boundaries
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) return 0;

        // If the result is already computed, return it
        if (memo[i][j] != -1) return memo[i][j];

        int max_moves = 0;

        // Check and move to the right-top diagonal, right, and right-bottom diagonal if conditions are met
        if (i > 0 && j + 1 < grid[0].size() && grid[i][j] < grid[i - 1][j + 1]) {
            max_moves = max(max_moves, 1 + sol(i - 1, j + 1, grid, memo));
        }
        if (j + 1 < grid[0].size() && grid[i][j] < grid[i][j + 1]) {
            max_moves = max(max_moves, 1 + sol(i, j + 1, grid, memo));
        }
        if (i + 1 < grid.size() && j + 1 < grid[0].size() && grid[i][j] < grid[i + 1][j + 1]) {
            max_moves = max(max_moves, 1 + sol(i + 1, j + 1, grid, memo));
        }

        // Store the result in the memoization table
        memo[i][j] = max_moves;
        return max_moves;
    }

    int maxMoves(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> memo(rows, vector<int>(cols, -1)); // Initialize memoization table

        int max_path = 0;
        // Try starting from each cell in the first column
        for (int i = 0; i < rows; ++i) {
            max_path = max(max_path, sol(i, 0, grid, memo));
        }
        return max_path;
    }
};
