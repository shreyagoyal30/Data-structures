class Solution {
public:
    bool issafe(int row,int col,vector<string>&board,int n){
        //checking left rows
        int r=row,c=col;
        while(col--){
            if(board[row][col]=='Q')
                return false;
        }
        //checking upper diagonal
        col=c;
        while(row-- && col--){
            if(board[row][col]=='Q')
                return false;
        }
        //checking lower diagonal
        row=r,col=c;
        while(row<n && col>=0){
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col]='Q';
            solve(col+1,board,ans,n);
                board[row][col]='.';
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n){
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};