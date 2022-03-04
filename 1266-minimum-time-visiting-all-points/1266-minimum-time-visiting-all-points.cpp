class Solution {
public:
  

// Since you can move diagonally, the number of moves is bound only by the longest dimension, either x or y. Think about it: If the next node is +10x and -5y away, it's going to take exactly 10 steps, because you can only move 1 x at a time and the difference in y is made up by diagonal moves during the process of overcoming the difference in x.

// This detail is expressed clearly by your code:

// if dy = abs(points[i][1] - points[i - 1][1])

// and dx = abs(points[i][0] - points[i - 1][0])

// you can find precisely how many steps it will take by taking whichever of dx and dy is larger, because the smaller difference will be overcome by diagonal steps to get to the larger anyway. Hence, you have:

// ans += max(dy, dx)


    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
      int ans=0;
        for(int i=1;i<points.size();i++){
          auto cur=points[i],prev=points[i-1];
          ans+=max(abs(cur[0]-prev[0]),abs(cur[1]-prev[1]));
        }
      return ans;
    }
};