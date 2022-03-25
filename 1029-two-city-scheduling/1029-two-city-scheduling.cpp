class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int>diff;
        int n=costs.size();
        n/=2;
        
        int total=0;
        for(auto x:costs){
            total+=x[0];
            diff.push_back(x[1]-x[0]);
        }
        sort(diff.begin(),diff.end());
        for(int i=0;i<n;i++){
            total+=diff[i];
        }
        return total;
    }
};