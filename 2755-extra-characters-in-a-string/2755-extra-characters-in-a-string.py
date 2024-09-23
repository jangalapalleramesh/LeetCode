class Solution:
    def minExtraChar(self, s: str, dictionary: List[str]) -> int:
        n = len(s)
        dp = [float('inf')] * (n + 1)
        dp[0] = 0  # No extra characters for an empty string

        for i in range(n):
            # Try every word in the dictionary
            for word in dictionary:
                if s.startswith(word, i):
                    dp[i + len(word)] = min(dp[i + len(word)], dp[i])

            # If no word matches, move to the next character
            dp[i + 1] = min(dp[i + 1], dp[i] + 1)

        return dp[n]
        