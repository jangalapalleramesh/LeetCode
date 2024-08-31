class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {

        vector<vector<pair<int,double>>> graph(n);

        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            graph[u].emplace_back(v,prob);
            graph[v].emplace_back(u,prob);
        }

        //max-heap priority queue
        priority_queue<pair<double,int>> pq;
        vector<double> probabilities(n,0.0);
        probabilities[start] = 1.0;
        pq.push({1.0,start});



        while(!pq.empty()){
            auto [prob,node] = pq.top();
            pq.pop();

            if(node == end){
                return prob;
            }

            for(auto &[neighbor,edgeProb]:graph[node]){

                double newProb = prob*edgeProb;
                if(newProb > probabilities[neighbor]){
                    probabilities[neighbor] = newProb;
                    pq.push({newProb,neighbor});
                }
            }
        }

        return 0.0;
        
    }
};