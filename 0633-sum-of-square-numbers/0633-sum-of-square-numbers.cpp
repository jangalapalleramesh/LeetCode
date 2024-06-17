class Solution {
public:
    bool judgeSquareSum(int c) {
        // for(long i=0;i*i<=c;i++){
        //     for(long j=0;j*j<=c;j++){
        //         if(i*i+j*j == c){
        //             return true;
        //         }
        //     }
        // }
        long l = 0;
        long r =floor(sqrt(c));
        while(l<=r){
            if(l*l+r*r<c){
                l++;
            }
            else if(l*l+r*r>c){
                r--;
            }
            else{
                return true;
            }
        }
        // cout<<sqrt(c)
        return false;
        
    }
};