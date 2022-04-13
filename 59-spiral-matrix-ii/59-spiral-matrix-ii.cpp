class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1=0,r2=n-1,c1=0,c2=n-1;
        int t=1;
        vector<vector<int>>ans(n,vector<int>(n));
        while(r1<=r2 && c1<=c2){
        for(int i=c1;i<=c2;i++){
            ans[r1][i]=t++;
        }
        r1++;
        for(int i=r1;i<=r2;i++){
            ans[i][c2]=t++;
        }
        c2--;
        for(int i=c2;i>=c1;i--){
            ans[r2][i]=t++;
        }
        r2--;
        for(int i=r2;i>=r1;i--) 
            ans[i][c1]=t++;
        c1++;
    }
    return ans;
    }
};