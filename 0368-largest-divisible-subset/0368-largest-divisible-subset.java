class Solution {
    public List<Integer> largestDivisibleSubset(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int[] dp = new int[n];
        int[] prev = new int[n];
        Arrays.fill(dp,1);
        Arrays.fill(prev,-1);
        int maxi = 0;
        int maxIndex = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1){
                    dp[i] = dp[j]+1;
                    prev[i] = j;
                }
            }
            if(dp[i]>maxi){
                maxi = dp[i];
                maxIndex = i;
            }

        }
        List<Integer> res = new ArrayList<>();
        for(int i = maxIndex;i>=0;i=prev[i]){
            res.add(nums[i]);
            if(prev[i]==-1)break;
        }

        return res;

        
    }
}