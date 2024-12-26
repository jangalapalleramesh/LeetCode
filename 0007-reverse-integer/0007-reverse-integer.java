class Solution {
    public int reverse(int x) {
        long n = 0;
        int r =0;
        while(x!=0){
            r = x%10;
            n = n*10+r;
            x=x/10;
            
        }
        if(n>(1<<31)-1 || n<-(1<<31)) return 0;
        return (int)n;
        
    }
}