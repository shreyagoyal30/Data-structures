class Solution {
public:
  //variation of house robber
  //we cant pick adjacent elements//pick notpick method
  int f(int num,vector<int>&freq,vector<int>&dp){
    if(num>10000) return 0;
    if(dp[num]!=-1) return dp[num];
    return dp[num]= max(num*freq[num]+f(num+2,freq,dp),f(num+1,freq,dp));
    
  }
    int deleteAndEarn(vector<int>& nums) {
      vector<int>freq(10001);
        vector<int>dp(10001,-1);
      for(auto x:nums)freq[x]++;
        return f(1,freq,dp);
    }
};