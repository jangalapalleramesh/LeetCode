class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {

        int availableAt = 0;
        double waitingTime = 0;
        for(auto customer: customers){
            int arrival = customer[0];
            int time = customer[1];

            availableAt = max(availableAt,arrival)+time;
            waitingTime += availableAt-arrival;
        }

        return (double) waitingTime / customers.size();
        
    }
};