class Solution {
    
    public int[] maxSumOfThreeSubarrays(int[] nums, int k) {
        int[] subArraySum = new int[nums.length-k+1];
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        subArraySum[0] = sum;
        for(int i=1;i<=nums.length-k;i++){
            sum+=nums[i+k-1]-nums[i-1];
            subArraySum[i]=sum;
            
        }
        int[] left = new int[nums.length-k+1];
        int[] right = new int[nums.length-k+1];
        //left
        int maxIndex= 0;
        for(int i=0;i<left.length;i++){
            if(subArraySum[i]>subArraySum[maxIndex]){
                maxIndex = i;
            }
            left[i] = maxIndex;
        }
        //right
        maxIndex=right.length-1;
        for(int i=right.length-1;i>=0;i--){
            if(subArraySum[i]>=subArraySum[maxIndex]){
                maxIndex = i;
            }
            right[i] = maxIndex;
        }
        int[] ans = new int[3];
        //find main answer
        int maxi = 0;
        int total = 0;
        for(int i=k;i<right.length-k;i++){
            int li = left[i-k];
            int ri = right[i+k];
            total = subArraySum[li]+subArraySum[ri]+subArraySum[i];
            if(total>maxi){
                maxi = total;
                ans[0]=li;
                ans[1]=i;
                ans[2]=ri;
            }
        }
        
        return ans;
    }
}