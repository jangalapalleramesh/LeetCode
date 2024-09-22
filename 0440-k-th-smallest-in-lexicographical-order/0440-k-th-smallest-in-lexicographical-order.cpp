class Solution {

public:
    int findKthNumber(int n, int k) {
        int cur = 1;
        k--;// because cur is first number
        long long steps = countSteps(cur,n);

        while(k>0){
            long long steps = countSteps(cur,n);
            if(steps<=k){
                cur++;
                k-=steps;
            }
            else{
                cur*=10;
                k--;
            }
        }

        return cur;
        
    }

    long long countSteps(long long cur,long long n){
        long long steps = 0;
        long long first = cur,last = cur;
        while(first<=n){
            steps+= min(n+1,last+1)-first;
            first*=10;
            last=last*10 + 9;
        }

        return steps;
    }
};