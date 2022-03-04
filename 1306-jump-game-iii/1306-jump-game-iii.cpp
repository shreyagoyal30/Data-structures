class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>q;
      q.push(start);
      int n=arr.size();
      vector<int>vis(n,0);
      while(!q.empty()){
        int t=q.front();
        q.pop();
          if(arr[t]==0) return true;
        int newpos=t+arr[t];
   
        if(newpos<n && !vis[newpos]) {
          vis[newpos]=true;
          q.push(newpos);
        }
          newpos=t-arr[t];
   
        if(newpos>=0 && !vis[newpos]) {
          vis[newpos]=true;
          q.push(newpos);
        }
      }
      return false;
    }
};