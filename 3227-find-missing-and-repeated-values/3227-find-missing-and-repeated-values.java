class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
         int n = grid.length;
         int m = n*n;
         int[] ans = new int[m+1];
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[grid[i][j]]++;
            }
         }
         int[] res = new int[2];
         for(int i = 1;i<=m;i++){
            if(ans[i]==2){
                res[0]=i;
            }
            else if(ans[i]==0){
                res[1] = i;
            }
         }
         return res;
        
    }
}