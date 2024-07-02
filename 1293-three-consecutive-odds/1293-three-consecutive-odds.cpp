class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

        int n = arr.size();
        int cou = 0;
        for(int i=0;i<n;i++){
            if(arr[i]&1){
                cou++;
            }
            else{
                cou = 0;
            }
            if(cou==3){
                return true;
            }
        }

        return false;

        
    }
};