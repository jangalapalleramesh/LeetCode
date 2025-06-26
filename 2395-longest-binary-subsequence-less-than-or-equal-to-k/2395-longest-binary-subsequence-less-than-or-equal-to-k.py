class Solution:
    def longestSubsequence(self,s: str, k: int) -> int:
        count = 0         # Count of characters included in subsequence
        value = 0         # Decimal value of current subsequence
        power = 1         # Binary place value (1, 2, 4, 8,...)

        # Traverse from right to left (least significant bit to most)
        for ch in reversed(s):
            if ch == '0':
                count += 1  # Always safe to include 0
            else:
                if power <= k and value + power <= k:
                    value += power
                    count += 1
                # Else we skip this '1'

            power *= 2
            if power > k:  # No point in increasing power beyond k
                break

        # Count all remaining 0s in the part we didn't process
        # Because we may have skipped some 0s at the start
        count += s[:len(s) - (power.bit_length() - 1)].count('0')

        return count