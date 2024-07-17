class Solution {
public:
    int f(vector<int>& num){
        int n= num.size();
        int prev1 = num[0];
        int prev2 = 0;
        int cur = 0,p = 0,np = 0;
        for(int i=1;i<n;i++){
            p = num[i];
            if(i>1) p+=prev2;
            np = prev1;
            cur = max(p,np);
            prev2 = prev1;
            prev1 = cur;
        }

        return prev1;
    }
    int rob(vector<int>& nums) {

        vector<int> temp1,temp2;
        int n = nums.size();
        if(n == 1) return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);

        }

        return max(f(temp1),f(temp2));
        
    }
};