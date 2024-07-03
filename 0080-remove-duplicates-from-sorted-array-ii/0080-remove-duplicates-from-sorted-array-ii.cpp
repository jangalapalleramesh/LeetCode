class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        int cou = 2;
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[cou-2]){
                nums[cou] = nums[i];
                cou++;
                // flag = 1;
            }
            // if(nums[i]==nums[i-1] && flag == 1){
            //     nums[cou]=nums[i];
            //     cou++;
            //     flag = 0;
            // }
            
        }

        return cou;

        
    }
};