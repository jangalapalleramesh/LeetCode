class Solution {
    void dfs(int cur,int n,vector<int>& result){
        if(cur>n) return;
        result.push_back(cur);
        for(int i=0;i<=9;i++){
            int new_num = cur*10+i;
            if(new_num>n) break;
            dfs(new_num,n,result);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for(int i=1;i<=9;i++){
            dfs(i,n,result);
        }

        return result;
        
    }
};