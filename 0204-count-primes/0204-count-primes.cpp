class Solution {
public:
    int countPrimes(int n) {
        if(n<=1){
            return 0;
        }
        vector<int> primes(n+1,1);
        primes[0]=0;
        primes[1]=0;
    
        for(int i=2;i*i<=n;i++){
            if(primes[i]){
                for(int j = i*i;j<=n;j+=i){
                    primes[j]=0;
                }
            }
        }
        int cou = 0;
        for(int i=2;i<n;i++){
            if(primes[i]==1){
                cou++;
            }
           
        }

        return cou;

        
    }
};