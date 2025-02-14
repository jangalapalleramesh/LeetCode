class Solution {
    private int fun(int idx,int buy,int[] prices,int[][] dp){
        if(idx==prices.length) return 0;
        int profit = 0;
        if(dp[idx][buy]!=-1)return dp[idx][buy];
        if(buy==1){
            profit = Math.max(-prices[idx]+fun(idx+1,0,prices,dp),fun(idx+1,1,prices,dp));
        }
        else{
            profit = Math.max(prices[idx]+fun(idx+1,1,prices,dp),fun(idx+1,0,prices,dp));
        }
        return dp[idx][buy] = profit;
    }
    public int maxProfit(int[] prices) {
        int[][] dp = new int[prices.length][2];
        for(int i=0;i<prices.length;i++)Arrays.fill(dp[i],-1);
        return fun(0,1,prices,dp);
        
    }
}