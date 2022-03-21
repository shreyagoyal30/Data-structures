//tabulation

class Solution {
    
public:
    bool isMatch(string s, string p) {
        int n=p.length();
        int m=s.length();
         vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
       dp[0][0]=true;
        for(int j=1;j<=m;j++){
            dp[0][j]=false;
        }
        for(int i=1;i<=n;i++){
             bool flag=true;{
             for(int ii=1;ii<=i;ii++)
                if(p[ii-1]!='*') {
                   
                    flag=false;
                    break;
                }
            }
           
                dp[i][0]= flag;
         
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               
        if(s[j-1]==p[i-1] || p[i-1]=='?')  dp[i][j]=dp[i-1][j-1] ; //both move forward
        
      else  if( p[i-1]=='*')
         dp[i][j]= dp[i-1][j] | dp[i][j-1];//case1- we will ignore * and move forward //case2- * will include p[j]
        
             else  dp[i][j]=false;
            }
            
        }
        return dp[n][m];
    }
};


//its giving tle
// class Solution {
//     bool f(int i,int j,string p, string s,vector<vector<int>>&dp){
//         if(i<0 && j<0) return true;//string matches completely
//         if(i<0 && j>=0) return false;
//         if(i>=0 && j<0){
//             //eg-s=***ab p=ab all star match empty string 
//             for(int ii=0;ii<=i;ii++)
//                 if(p[ii]!='*') return false;
//             return true;
//         }
        
//         if(dp[i][j]!=-1) return dp[i][j];
//         if(s[j]==p[i] || p[i]=='?') return dp[i][j]=f(i-1,j-1,p,s,dp); //both move forward
        
//         if( p[i]=='*')
//         return dp[i][j]= f(i-1,j,p,s,dp) | f(i,j-1,p,s,dp);//case1- we will ignore * and move forward //case2- * will include p[j]
        
//              return  dp[i][j]=false;
//     }
// public:
//     bool isMatch(string s, string p) {
//         int n=p.length();
//         int m=s.length();
//          vector<vector<int>>dp(n,vector<int>(m,-1));
       
//         return f(n-1,m-1,p,s,dp);
//     }
// };

