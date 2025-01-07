class Solution {
    public void sortColors(int[] nums) {
         int low = 0;
         int i = 0;
         int j = nums.length - 1;
         while(i<=j){
            if(nums[i]==0){
                nums[low] = nums[low] + nums[i] -(nums[i]=nums[low]);
                i++;
                low++;
            }
            else if(nums[i]==1){
                i++;
            }
            else{
                nums[j] = nums[j]+nums[i]-(nums[i]=nums[j]);
                j--;
            }
         }
        
    }
}