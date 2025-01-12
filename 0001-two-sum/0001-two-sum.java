class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return new int[] {i,j};
        //         }
        //     }
        // }
        Map<Integer,Integer> mpp = new HashMap<>();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.containsKey(moreNeeded)){
                return new int[]{i,mpp.get(moreNeeded)};
            }
            mpp.put(nums[i],i);
        }
        return new int[]{-1,-1};
        
    }
}