class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string>a;
        a.push_back(folder[0]);
        for(auto c : folder){
            if(c.find(a.back()+'/')!=0){
                if(c!=folder[0])
                a.push_back(c);


            }

        }
        return a;
        
    }
};