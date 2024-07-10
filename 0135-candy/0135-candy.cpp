class Solution {
public:
    int candy(vector<int>& ratings) {
        // pair<int,int> freq;
        // freq[ratings[0]] = 1;
        // for(int i=0;i<ratings.size()-1;i++){
        //     if(ratings[i]<ratings[i+1]){
        //         freq[ratings[i+1]]=freq[ratings[i]]+1;
        //     }
        //     else{
        //         freq[ratings[i+1]] = 1;
        //         if(freq[ratings[i]]==freq[ratings[i+1]]){
        //             freq[ratings[i]]=freq[ratings[i+1]]+1;

        //         }
        //     }

        // }
        // int sum = 0;

        // for(auto p : freq){
        //     cout<<p.first<<"  "<<p.second<<endl;
        //     sum+=p.second;

        // }

        // return sum;

        int n = ratings.size();
        vector<int> candies(n,1);

        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                candies[i] = candies[i-1]+1;
            }
        }

        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = std::max(candies[i], candies[i + 1] + 1);
            }
        }

        int t = 0;
        for(auto p :candies){
            t+=p;
        }

        return t;

        
    }
};