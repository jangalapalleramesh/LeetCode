class Solution {
public:
    bool flag = true;
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int row = grid1.size();
        int col = grid2[0].size();
        
        int cou = 0;
        vector<vector<int>> visited(row,vector<int>(col,0));
        for(int r = 0;r<row;r++){
            for(int c = 0;c<col;c++){
                if(grid2[r][c]==1){
                    if(!visited[r][c]){
                        flag = true;
                        dfs(grid1,grid2,visited,r,c);
                        if(flag) cou++;
                    }
                }
            }
        }
        return cou;
        
    }

    void dfs(vector<vector<int>> &grid1,vector<vector<int>> &grid2,vector<vector<int>> &visited,int r,int c){
        if(r<0||r>grid1.size()-1||c<0||c>grid2[0].size()-1) return;
        if(visited[r][c] || grid2[r][c]==0) return ;
        if(grid1[r][c] == 0) flag = false;

        visited[r][c] = 1;
        dfs(grid1,grid2,visited,r+1,c);
        dfs(grid1,grid2,visited,r-1,c);
        dfs(grid1,grid2,visited,r,c+1);
        dfs(grid1,grid2,visited,r,c-1);
    }
};