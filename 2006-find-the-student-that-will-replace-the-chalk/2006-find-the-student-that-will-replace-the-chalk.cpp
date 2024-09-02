class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        int n = chalk.size();
        int i = 0;
        long sum = 0;
        for(auto p :chalk){
            sum+=p;

        }
        k = k%sum;
        while(chalk[i]<=k){
            k = k - chalk[i];
            i = i +1;
        }

        return i;
        
    }
};