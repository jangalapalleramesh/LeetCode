class Solution {
    // private int f(double ans,double x,int n){
    //     if(n==0) return 1;
    //     if(n%2==0){
    //         ans = ans*f(ans,x*x,n/2);
    //     }
    //     else{
    //         ans = ans*x*f(ans,x*x,(n-1)/2);
    //     }
    //     return 1;
        
    // }
    public double myPow(double x, int n) {
        // if(n==0) return 1;
        // if(n<0) return 1/myPow(x,-1*n);
        // if(n%2==0) return myPow(x*x,n/2);
        // return x*myPow(x*x,(n-1)/2);

        double ans = 1.0;
        long nn = n;
        if(nn<0) nn = -1*nn;
        while(nn!=0){
            if(nn%2==0){
                x=x*x;
                nn=nn>>1;
            }
            else{
                ans*=x;
                nn = nn-1;
            }
        }
        if(n<0){
            ans = 1.0/ans;
        }
        return ans;
        
    }
}