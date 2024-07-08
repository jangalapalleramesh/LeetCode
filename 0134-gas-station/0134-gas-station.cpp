class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       long long int totalgas=0,totalcost=0;
       int n=gas.size();
        for(int i=0;i<n;i++){
            totalcost+=cost[i];
            totalgas+=gas[i];
        }
        if(totalcost>totalgas)return -1;
        int start=0;
        int remaininggas=0;
        for(int i=0;i<n;i++){
           remaininggas+=(gas[i]-cost[i]);
            if(remaininggas<0){
                start=i+1;
                remaininggas=0;
            }
        }
        return start;
    }
};