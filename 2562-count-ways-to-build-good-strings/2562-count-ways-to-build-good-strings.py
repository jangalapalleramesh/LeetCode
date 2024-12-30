class Solution:
    def countGoodStrings(self, low: int, high: int, zero: int, one: int) -> int:
        MOD = 10**9 + 7
    
        # DP array to store the number of ways to form strings of length i
        dp = [0] * (high + 1)
        dp[0] = 1  # Base case: 1 way to form an empty string
        
        # Fill DP table
        for i in range(1, high + 1):
            if i >= zero:
                dp[i] += dp[i - zero]
            if i >= one:
                dp[i] += dp[i - one]
            dp[i] %= MOD
        
        # Sum up the count for lengths in the range [low, high]
        result = sum(dp[low:high + 1]) % MOD
        return result
        