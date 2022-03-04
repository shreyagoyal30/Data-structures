class Solution {
public:
    int maxScore(vector<int>& p, int k) {
      int n=p.size();
        vector<int>pre(n+1,0);
      vector<int>suf(n+1,0);
      for(int i=0;i<n;i++){
        // cout<<p[n-(i+1)]<<endl;
        pre[i+1]=pre[i]+p[i];
        // cout<<pre[i+1]<<endl;
        suf[i+1]=suf[i]+p[n-(i+1)];
        // cout<<suf[i+1]<<endl;
      }
      int i=0,j=k,maxi=INT_MIN;
      while(j!=-1){
       int sum=pre[i]+suf[j];
        maxi=max(maxi,sum);
        i++;
        j--;
      }
      return maxi;
    }
  
  
  
  
};