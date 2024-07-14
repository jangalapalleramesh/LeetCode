class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long xori = 0;
        for(int i=0;i<n;i++){
            xori ^= nums[i];

        }
        int rightmost = (xori & xori -1) ^ xori;

        int d1 = 0;
        int  d2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]&rightmost){
                d1 = d1 ^ nums[i];
            }
            else{
                d2^=nums[i];
            }
        }

        return {d1,d2};
        
    }
};