class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cou = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i]){
                nums[cou] = nums[i+1];
                cou++;
            }

        }

        return cou;
        
    }
};