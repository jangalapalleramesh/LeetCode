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
        for(long i =0;i*i<=c;i++){
            
            if(l*l+r*r<c){
                cout<<"l:  "<<l<<endl;
                l++;
               
            }
            else if(l*l+r*r>c){
                cout<<"r:  "<<r<<endl;
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