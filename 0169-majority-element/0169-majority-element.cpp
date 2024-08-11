class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[n/2];
        int cou = 0;
        int ele = INT_MIN;
        for(int i=0;i<n;i++){
            if(cou==0){
                cou = 1;
                ele = nums[i];
                
            }
            else if(ele == nums[i]){
                cou++;
            }
            else{
                cou--;
            }
        }


        return ele;
        
    }
};