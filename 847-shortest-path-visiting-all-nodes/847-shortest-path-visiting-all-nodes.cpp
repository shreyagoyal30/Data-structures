class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {

        int n=graph.size();
      if(n==1) return 0;
      int finalstate=(1<<n)-1;
      vector<vector<int>>visited(n,vector<int>(finalstate+1,0));
      queue<vector<int>>q;
      for(int i=0;i<n;i++) q.push({i,(1<<i)});
      int shortestdist=0;
      while(!q.empty()){
        int size=q.size();
        shortestdist++;
        for(int i=0;i<size;i++){
          vector<int>top=q.front();
          q.pop();
          int node=top[0];
          int curbitstate=top[1];
          for(auto x:graph[node]){
            int newbitstate= curbitstate|(1<<x);
            if(visited[x][newbitstate]) continue;
            visited[x][newbitstate]=1;
            if(newbitstate==finalstate) return shortestdist;
            q.push({x,newbitstate});
          }
        }
      }
      return -1;
    }
};