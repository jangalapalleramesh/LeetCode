class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return true;
        int sn = s.length();
        int tn = t.length();
        int j=0;
        for(int i=0;i<tn;i++){
            if(t[i]==s[j]){
                j++;
            }
            if(j==sn) return true;

        }
        return false;
        
    }
};