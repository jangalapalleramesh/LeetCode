class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // int n1 = word1.length();
        // int n2 = word2.length();
        // int rmax = 0,rmin =0;;
        // if(n1<=n2){
        //     rmin=n1;
        //     rmax=n1;
        // }
        // else{
        //     rmin=n2;
        //     rmax=n1;
        // }
        // string result ="";
        // int k=0;
        // for(int i=0;i<rmin;i++){
        //     result+=word1[i];
        //     result+=word2[i];
        // }
        // for(int i=rmin;i<rmax;i++){
        //     if(n1>n2){
        //         result+=word1[i];
        //     }
        //     else if(n1<n2){
        //         result+=word2[i];
        //     }
        //     // result+=(n1>n2)?word1[i]:word2[i];
        // }
        int i=0;
        string result = "";
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()){
                result+=word1[i];
            }
            if(i<word2.length()){
                result+=word2[i];
            }
            i++;
        }

        return result;
        
    }
};