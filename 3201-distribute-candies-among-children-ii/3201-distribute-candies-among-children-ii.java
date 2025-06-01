public class Solution {
    public long distributeCandies(int n, int limit) {
        return totalWays(n, limit);
    }

    private long totalWays(int n, int limit) {
        return comb(n + 2, 2)
             - 3 * comb(n - (limit + 1) + 2, 2)
             + 3 * comb(n - 2 * (limit + 1) + 2, 2)
             - comb(n - 3 * (limit + 1) + 2, 2);
    }

    private long comb(int n, int r) {
        if (n < r) return 0;
        return (long) n * (n - 1) / 2;
    }
}
