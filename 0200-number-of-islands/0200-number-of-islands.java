class Solution {
    private void dfs(int i,int j,char[][] grid){
        if(i<0 || j>=grid[0].length || j<0 || i>=grid.length ||grid[i][j]=='0') return ;
        grid[i][j] = '0';

        
                    //top
                    dfs(i-1,j,grid);
                    //bottom
                    dfs(i+1,j,grid);
                    //left
                    dfs(i,j-1,grid);
                    //right
                    dfs(i,j+1,grid);
        
    }
    public int numIslands(char[][] grid) {
        int n = grid.length;
        int m  = grid[0].length;
        
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }

        return count;
        
    }
}