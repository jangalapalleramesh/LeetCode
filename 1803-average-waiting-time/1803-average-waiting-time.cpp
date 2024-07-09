class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        int ct = 0;
        long twt = 0;

        for(auto customer:customers){
            int at = customer[0];
            int bt = customer[1];
            
            ct = max(ct,at)+bt;
            twt += (ct - at);

        }

        return (double) twt/n;
        
    }
};