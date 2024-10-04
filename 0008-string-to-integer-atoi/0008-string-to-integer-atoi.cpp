class Solution {
public:
    int myAtoi(string s) {
        long res = 0;
        int sign = 1;//default is positive
        int n = s.size();
        int i=0;
        
        // step1 : remove leading zeros
        while(i<n && s[i]==' '){
            i++;
        }
        // check for the condition
        if(i<n && (s[i]=='+' || s[i]=='-')){
            sign = (s[i]=='-')?-1:1;
            i++;
        }
        //remove leading zeros;
        while(i<n && s[i]=='0'){
            i++;
        }
        // step3: check the numbers is digit
        while(i<n && (s[i]>='0'&&s[i]<='9')){
            res = res*10 + (s[i]-'0');
            if(res*sign>INT_MAX){
                return INT_MAX;
            }
            if(res*sign<INT_MIN){
                return INT_MIN;
            }
            i++;
        }

        return res*sign;
        
    }
};