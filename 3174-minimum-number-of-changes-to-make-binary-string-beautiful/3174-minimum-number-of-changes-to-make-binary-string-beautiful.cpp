class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int dachukoo = s[0];
        int i = 0;
        int cou = 0;
        while(i<n){
            i = i+1;
            if(dachukoo!=s[i]){
                cou++;
            }
            i = i+1;
            dachukoo = s[i];
        }
        return cou;

        
    }
};