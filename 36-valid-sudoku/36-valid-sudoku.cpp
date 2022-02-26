class Solution {
public:
 
    bool isValidSudoku(vector<vector<char>>& board) {
      int isused1[9][9]={0},isused2[9][9]={0},isused3[9][9]={0};
      for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
          int num=board[i][j]-'0'-1;
          int k=i/3*3+j/3;
          if(board[i][j]!='.'){
          if(isused1[i][num] || isused2[j][num] || isused3[k][num])
            return false;
          isused1[i][num]=isused2[j][num]=isused3[k][num]=1;}
        }
      }
      return true;
    }
};