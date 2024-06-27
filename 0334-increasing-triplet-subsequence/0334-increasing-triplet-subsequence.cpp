class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int n =nums.size();
        int l = INT_MAX;
        int r = INT_MAX;
        for(int i=0;i<n;i++){

            // if(nums[l]<nums[r]){
            //     cou++;
            // }
            // else{
                
            // }
            // if(cou == 3) return true;
            // l++;
            // r++;

            if(nums[i]<l){
                l = nums[i];

            }
            if(nums[i]>l && nums[i]<r){
                r = nums[i];
            }

            if(nums[i]>r){
                return true;
            }

        }

        return false;
        
    }
};