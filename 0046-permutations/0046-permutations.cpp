class Solution {
public:

    void permut(vector<int> &ds,vector<vector<int>> &ans,vector<bool> &visted,vector<int> &nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!visted[i]){
                ds.push_back(nums[i]);
                visted[i]=true;
                permut(ds,ans,visted,nums);
                visted[i]=false;
                ds.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> visited(nums.size(),false);
        permut(ds,ans,visited,nums);
        return ans;
        
    }
};