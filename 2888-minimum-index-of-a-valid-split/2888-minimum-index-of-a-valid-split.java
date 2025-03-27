class Solution {
    public int minimumIndex(List<Integer> nums) {
        
        int n = nums.size();
        int cou = 0;
        int c = 0;
        int domele = -1, count = 0;
        for (int num : nums) {
            if (count == 0) domele = num;
            count += (num == domele) ? 1 : -1;
        }
        for(int i=0;i<n;i++){
            if(nums.get(i)==domele) cou++;

        }
        for(int i=0;i<n;i++){
            if(nums.get(i)==domele){
                c++;
                cou--;
            }
            if(c*2>(i+1) && cou*2 >(n-(i+1))){
                return i;
            }
        }
        
        return -1;
        
    }
}