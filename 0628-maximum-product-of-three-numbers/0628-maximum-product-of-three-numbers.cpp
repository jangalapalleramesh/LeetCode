class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max1 = nums[0]*nums[1]*nums[2];
        int n =nums.size();
        int max2 = nums[n-1]*nums[n-2]*nums[n-3];
        int max3 = INT_MIN;
        if(n>=4) max3 = nums[0]*nums[1]*nums[n-1];
        return max(max3,max(max1,max2));
        
    }
};