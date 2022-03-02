class Solution {
  int n,m;
public:
  //method 1-try out all subsequence will give TLE
  
//   int f(int ind,string t,string s,string res, vector<int>&dp){
//     if(res==s) return 1;
//     if(ind==t.length()) return 0;
  
//     bool nottake=  f(ind+1,t,s,res,dp);
//     res+=t[ind];
//     bool take=f(ind+1,t,s,res,dp);
//     return (take==true || nottake==true)?1:0;
//   }
//     bool isSubsequence(string s, string t) {
//       string res="";
//       vector<int>dp(t.length(),-1);
//        return  f(0,t,s,res,dp);
      
//     }
  
  // Method 2-find the length of LCS
  
//   int LCS(int i,int j,string t, string s,vector<vector<int>>&dp){
//     if(j==-1 || i==-1) return 0;
    
//     if(dp[i][j]!=-1) return dp[i][j];
    
//     if(t[i]==s[j])  return dp[i][j]=1+LCS(i-1,j-1,t,s,dp);
//     else return dp[i][j]=max(LCS(i,j-1,t,s,dp),LCS(i-1,j,t,s,dp));

//   }
//   bool isSubsequence(string s, string t) {
//     n=t.length();
//     m=s.length();
//     vector<vector<int>>dp(n,vector<int>(m,-1));
//     return LCS(n-1,m-1,t,s,dp)==m;
//   }
  // Method 3 -easiest O(n)
  
    bool isSubsequence(string s, string t) {
    n=t.length();
    m=s.length();
      int j=0;
      for(int i=0;i<n;i++){
        if(t[i]==s[j])
          j++;
      }
      return j==m;
    }
};