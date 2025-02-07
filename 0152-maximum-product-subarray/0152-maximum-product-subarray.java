class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int [] dpMax = new int[nums.length];
        int[] dpMin = new int[nums.length];

        
        dpMax[0]=nums[0];
        dpMin[0]=nums[0];
        int maxi = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                int temp = dpMax[i-1];
                dpMax[i-1] = dpMin[i-1];
                dpMin[i-1] = temp;
            }
            dpMax[i] = Math.max(nums[i],dpMax[i-1]*nums[i]);
            dpMin[i] = Math.min(nums[i],dpMin[i-1]*nums[i]);
            maxi = Math.max(dpMax[i],maxi);
        }

        return maxi;

        
    }
}