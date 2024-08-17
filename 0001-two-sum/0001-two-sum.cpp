class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // int i=0;
        // int j =0;
        // for(i=0;i<n;i++){
        //     for(j = i+1;j<n;j++){
        //         if((nums[i]+nums[j])==target){
        //             return {i,j};
        //         }
                
        //     }
        // }
        // return {i,j};
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            int a = nums[i];
            int m = target-nums[i];
            if(mpp.find(m)!=mpp.end()){
                return {mpp[m],i};
            }
            mpp[a]=i;

        }

        return {-1,-1};
        
        
    }
};