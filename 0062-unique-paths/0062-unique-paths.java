class Solution {
    public int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double res = 1;
        for(int i=0;i<r;i++){
            res*= (N-i);
            res/=i+1;
            System.out.println(res);
        }

        return (int)Math.round(res);
        
    }
}