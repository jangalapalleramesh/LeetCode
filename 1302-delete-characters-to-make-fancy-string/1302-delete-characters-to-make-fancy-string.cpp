class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        for(auto c:s){
            if(res.size()>=2 && res[res.size()-1]==c && res[res.size()-2]==c){
                continue;
            }
            res += c;
        }

        return res;
        
    }
};