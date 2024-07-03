class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4){
            return 0;
        }
        sort(nums.begin(),nums.end());
    
        // int mini = nums[1] - nums[0];
        // for(int i=1;i<n-1;i++){
        //     if(mini>(nums[i+1]-nums[i])){
        //         mini = (nums[i+1]-nums[i]);
        //     }

        // }
        

        
        
        int res1 = nums[n-1] - nums[3];
        int res2 = nums[n-4] - nums[0];
        int res3 = nums[n-3] - nums[1];
        int res4 = nums[n-2] - nums[2];
        vector<int> result={res1,res2,res3,res4};
        return *min_element(result.begin(),result.end());
        
        
    }
};