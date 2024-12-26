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
    public double myPow(double x, long n) {
        if(n==0) return 1;
        if(n<0) return 1/myPow(x,-1*n);
        if(n%2==0) return myPow(x*x,n/2);
        return x*myPow(x*x,(n-1)/2);
        
        
    }
}