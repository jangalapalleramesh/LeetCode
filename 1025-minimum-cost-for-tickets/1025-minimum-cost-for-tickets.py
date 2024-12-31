class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        # Create a set for fast lookup of travel days
        travel_days = set(days)
        max_day = days[-1]  # Last travel day
        dp = [0] * (max_day + 1)  # Only compute up to the last travel day

        for i in range(1, max_day + 1):
            if i not in travel_days:
                dp[i] = dp[i - 1]  # No travel on this day
            else:
                dp[i] = min(
                    dp[i - 1] + costs[0],  # 1-day pass
                    dp[max(0, i - 7)] + costs[1],  # 7-day pass
                    dp[max(0, i - 30)] + costs[2]  # 30-day pass
                )
        return dp[max_day]
