class Solution:
    def longestSubsequence(self,s: str, k: int) -> int:
        zeros = s.count('0')
        count = zeros
        value = 0
        power = 1
        for ch in reversed(s):
            if ch == '1':
                if power <= k and value + power <= k:
                    value += power
                    count += 1
            power *= 2
            if power > k:
                break
        return count
