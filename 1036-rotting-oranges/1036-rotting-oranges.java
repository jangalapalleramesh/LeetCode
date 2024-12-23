class Pair{
    int row;
    int col;
    int time;
    Pair(int row,int col,int time){
        this.row = row;
        this.col = col;
        this.time = time;
    }
}
class Solution {
    public int orangesRotting(int[][] grid) {
        //we can slove this by using bfs
        int[][] temp = grid;
        
        int n = grid.length;
        int m = grid[0].length;
        int[][] vis = new int[n][m];
        int countFresh = 0;
        Queue<Pair> q = new LinkedList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==2){
                    q.add(new Pair(i,j,0));
                }
                if(temp[i][j]==1){
                    countFresh++;
                }
            }
        }
        //we create direction arrays
        int[] dRow = {-1,0,1,0};
        int[] dCol = {0,1,0,-1};
        int tm = 0;
        int cou = 0;
        while(!q.isEmpty()){
            int r = q.peek().row;
            int c = q.peek().col;
            int t = q.peek().time;
            q.remove();
            tm = Math.max(tm,t);
            for(int i=0;i<4;i++){
                int nRow = r+dRow[i];
                int nCol = c+dCol[i];
                if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && temp[nRow][nCol]==1 && vis[nRow][nCol]==0){
                    q.add(new Pair(nRow,nCol,t+1));
                    vis[nRow][nCol] = 2;
                    cou++;
                }
            }
        }

        if(cou!=countFresh) return -1;
        return tm;
        

        
    }
}