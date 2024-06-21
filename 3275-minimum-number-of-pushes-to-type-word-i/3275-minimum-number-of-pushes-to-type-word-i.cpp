class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int r = n%8;
        int q = n/8;
        // cout<<n;
        // if(n%8==0) return 8*((q*(q+1))/2);
        // if(n<16){
        //     return r*(q+1) + q*8;
        // }
        
        return r*(q+1) + 8*((q*(q+1))/2);
        
    }
};