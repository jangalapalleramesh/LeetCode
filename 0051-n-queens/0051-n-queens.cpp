class Solution {

public:
    bool isSafe(int row,int col,vector<string>&board,int n){
        int dupRow = row;
        int dupCol = col;
        //leftrow
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        //lowerleftrow
        row = dupRow;
        col = dupCol;
        if(row<n && col>=0){
            row++;
            col--;
            if(board[row][col]=='Q') return false;
        }
        //upperleftrow
        row = dupRow;
        col = dupCol;
        if(row>=0 && col>=0){
            row--;
            col--;
        if(board[row][col]=='Q') return false;
        }

        return true;
    }

    //now we can do using hashing
public:
    void solve(int col,vector<vector<string>> &ans,vector<string> &board,int n,vector<int> &leftrow,vector<int> &lowerleft,vector<int> &upperleft){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && lowerleft[row+col]==0 && upperleft[n-1+col-row]==0){
                board[row][col]='Q';
                leftrow[row]=1;
                lowerleft[row+col]=1;
                upperleft[n-1+col-row]=1;
                 solve(col+1,ans,board,n,leftrow,lowerleft,upperleft);
                 board[row][col]='.';
                leftrow[row]=0;
                lowerleft[row+col]=0;
                upperleft[n-1+col-row]=0;

                

            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        // create some vectors such as leftrow,lowerleftrow,upperleftrow for hasing to find a queen present in prevoiuy rows or not
        vector<int> leftrow(n,0), lowerleft(2*n-1,0),upperleft(2*n-1,0);
        for(int i = 0;i<n;i++){
            board[i]=s;
        }
        solve(0,ans,board,n,leftrow,lowerleft,upperleft);
        return ans;
        
    }
};