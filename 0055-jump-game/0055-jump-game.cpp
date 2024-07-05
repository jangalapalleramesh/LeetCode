class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        if(n==1) return true;
        int jumps = 1;
        for(int i = n-2;i>=0;i--){
            if(nums[i]>=jumps) jumps = 1;
            else jumps++;


        }
        return nums[0]>=jumps;
    }
};