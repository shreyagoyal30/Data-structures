class Solution {
    int f(int ind,int num,string& s,int len,vector<vector<int>>&dp, vector<int>&suffix){
       
         if(ind>=s.length()) return 0;
         if(num==0){
            return suffix[ind];
            }
           
        if(dp[ind][num]!=-1) return dp[ind][num];
        if(s[ind]=='0') dp[ind][num]=f(ind+1,num,s,len,dp,suffix);
       else {
            //dont start carpet here
            int dont=1+f(ind+1,num,s,len,dp,suffix);
            //start here
        int start=f(ind+len,num-1,s,len,dp,suffix);
             dp[ind][num]=min(dont,start);
        }
         return dp[ind][num];
    }
public:
    int minimumWhiteTiles(string floor, int num, int len) {
        int n=floor.size();
        
        vector<int>suffix(n+1,0);
        for(int i=n-1;i>=0;i--){
            suffix[i]=suffix[i+1];
             if(floor[i]=='1')       
                 suffix[i]++;
    }
        
        vector<vector<int>>dp(n+1,vector<int>(num+1,-1));
        return f(0,num,floor,len,dp,suffix);
    }
};