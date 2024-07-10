class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0,tc = 0;
        for(int i=0;i<gas.size();i++){
            tg+=gas[i];
            tc+=cost[i];
        }

        if(tg<tc) return -1;
        int r = 0;
        int start = 0;
        for(int i=0;i<gas.size();i++){
            r+=(gas[i]-cost[i]);
            if(r<0){
                start = i+1;
                r = 0;
            }
        }

        return start;
        
    }
};