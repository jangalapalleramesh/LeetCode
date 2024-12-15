class Solution {
    public int[] numberOfPairs(int[] nums) {
        int[] result = new int[2];
        if(nums.length==1){
            result[1]=1;
            return result;
        }
        Arrays.sort(nums);
        int pairCount=0,singleCount=0;

        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]){
                pairCount++;
                i++;
                
            }
            else{
                singleCount++;
                
            }
            if(i==nums.length-2){
                    singleCount++;
            }
            if(i==nums.length-1 && nums[nums.length-1]!=nums[i-1]){
                    singleCount++;
            }
        }
        result[0]=pairCount;
        result[1]=singleCount;
        return result;
        
    }
}