class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int col = grid[0].size();
        int cou = 0;
        for(int r = 0;r<rows;r++){
            for(int c= 0;c<col;c++){
                if(grid[r][c] == '1'){ 
                    dfs(grid,r,c);
                    cou++;

                }
            }
        }

        return cou;
        
    }

    void dfs(vector<vector<char>> &grid,int r,int c){
        if(r<0||r>grid.size()-1||c<0||c>grid[0].size()-1||grid[r][c]!='1') return;

        grid[r][c] = '0';

        dfs(grid,r+1,c);
        dfs(grid,r-1,c);
        dfs(grid,r,c-1);
        dfs(grid,r,c+1);
    }
};