class Solution {
public:
    bool static comp(pair<int,int>&a,pair<int,int>&b){
        if(a.second!=b.second) return a.second<b.second;
        else
            return a.first<b.first;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1) cnt++;
            }
            v.push_back({i,cnt});
        }
        sort(v.begin(),v.end(),comp);
        vector<int>ans(k);
        for(int i=0;i<k;i++){
            ans[i]=v[i].first;
        }
        return ans;
    }
};