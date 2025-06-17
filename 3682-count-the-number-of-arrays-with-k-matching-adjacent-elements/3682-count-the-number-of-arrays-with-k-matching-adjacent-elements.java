class Solution {
    static final int MOD = 1_000_000_007;
    static final int MAX = 100_001;
    static long[] fact = new long[MAX];
    static long[] invFact = new long[MAX];

    // Precompute factorials and inverse factorials
    static {
        fact[0] = invFact[0] = 1;
        for (int i = 1; i < MAX; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }
        invFact[MAX - 1] = modInverse(fact[MAX - 1]);
        for (int i = MAX - 2; i >= 1; i--) {
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
        }
    }

    // Modular inverse using Fermat's Little Theorem
    private static long modInverse(long x) {
        return modPow(x, MOD - 2);
    }

    private static long modPow(long base, long exp) {
        long result = 1;
        base %= MOD;
        while (exp > 0) {
            if ((exp & 1) == 1) result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    private static long nCr(int n, int r) {
        if (r < 0 || r > n) return 0;
        return (((fact[n] * invFact[r]) % MOD) * invFact[n - r]) % MOD;
    }

    public int countGoodArrays(int n, int m, int k) {
        long comb = nCr(n - 1, k);
        long pow = modPow(m - 1, n - 1 - k);
        long ans = (((comb * pow) % MOD) * m) % MOD;
        return (int) ans;
    }
}
