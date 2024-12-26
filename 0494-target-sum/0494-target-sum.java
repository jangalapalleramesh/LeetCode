class Solution {
    private void f(int i,int[] nums,int k,int[] c,int sum){
        if(i==nums.length){
            if(sum==k) c[0]++;
            return;
        }
        
        f(i+1,nums,k,c,sum+nums[i]);
        
        f(i+1,nums,k,c,sum-nums[i]);
        


    }
    public int findTargetSumWays(int[] nums, int target) {
        int[] count = new int[1];
        int sum=0;
        f(0,nums,target,count,sum);
        return count[0];
        
    }
}