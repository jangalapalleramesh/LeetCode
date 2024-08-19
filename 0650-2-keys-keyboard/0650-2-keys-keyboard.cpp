class Solution {
public:
    int minSteps(int n) {
        // Create a dp array to store the minimum number of steps for each count of 'A's
        vector<int> dp(n + 1, 0);

        // Fill the dp array using the dynamic programming approach
        for (int i = 2; i <= n; ++i) {
            dp[i] = i; // The worst case is i operations (1 copy + i-1 pastes)
            for (int j = 1; j <= i / 2; ++j) {
                if (i % j == 0) {
                    dp[i] = min(dp[i], dp[j] + i / j);
                }
            }
        }

        // The minimum steps to get n 'A's
        return dp[n];
    }
};