class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int l = 0;
        int h = numbers.length - 1;
        while(l<h){
            int sum = numbers[l]+numbers[h];
            if(sum>target){
                h--;
            }
            else if(sum<target){
                l++;
            }
            else{
                return new int[]{l+1,h+1};
            }
        }
        return new int[]{-1,-1};
        
    }
}