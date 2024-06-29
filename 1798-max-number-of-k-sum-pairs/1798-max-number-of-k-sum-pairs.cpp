class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int cou = 0;
        sort(nums.begin(),nums.end());
        while(l<r){
            if(nums[l]+nums[r]== k){
                cou++;
                l++;
                r--;
            }
            else{

            
            if(nums[l]+nums[r] >k){
                r--;
            }
            else{
                l++;
            }
            }
            
        }

        return cou;

    }
};