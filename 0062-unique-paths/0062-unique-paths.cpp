class Solution {
public:
    int uniquePaths(int m, int n) {

        // int r = m-1;
        // double res = 1;
        // for(int i=1;i<=r;i++){
        //     res*=(n-1+i)/i;
        // }

        // return (int)res;

        int r = m-1;
	    double res = 1;
        for(int i=1;i<=r;i++){
            res = res * (n-1+i)/i;
        }

        return (int)res;
        
    }
};