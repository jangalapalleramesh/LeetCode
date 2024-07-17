class Solution {
public:
    // memoization method;
    // int f(int i,vector<int>& nums,vector<int>& dp){

    //     if(i==0) return nums[0];
    //     if(i<0) return 0;

    //     if(dp[i]!=-1) return dp[i];

    //     //pick element
    //      int pick = nums[i] + f(i-2,nums,dp);
    //      // not pick element;
    //      int npick = 0+f(i-1,nums,dp);

    //      return dp[i] = max(pick,npick);

    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        // vector<int> dp(n+1,0);
        // //tabulation method
        // dp[0] = nums[0];
        // int neg = 0;
        // for(int i=1;i<n;i++){
        //     int p = nums[i];
        //     if(i>1) p+=dp[i-2];
        //     int np = 0 + dp[i-1];
            
        //     dp[i] = max(p,np);

        // }

        //now do space optimization 

        int prev1 = nums[0];
        int prev2 = 0,cur = 0,p = 0,np =0;
        for(int i=1;i<n;i++){
            p = nums[i];
            if(i>1) p+=prev2;
            np = prev1;

            cur = max(p,np);
            prev2 = prev1;
            prev1 = cur;
             
        }



        return prev1;
        
    }
};