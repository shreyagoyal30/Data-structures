// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


 // } Driver Code Ends
class Solution
{
    public:
    int f(int i,int j,string s1,string s2,vector<vector<int>>&dp){
        if(i<0||j<0||i>=s1.length()||j>=s2.length())
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j])
            return dp[i][j]=1+f(i-1,j-1,s1,s2,dp);
        
        return dp[i][j]= max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));
    }
    int build_bridges(string str1, string str2)
    {
        // code here
        int n=str1.length(),m=str2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,str1,str2,dp);
        
     
    }
};

// { Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 
  // } Driver Code Ends