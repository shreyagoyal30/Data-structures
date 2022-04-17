class Solution {
public:
    void solve(int ind,vector<int>v,vector<vector<int>>&ans,vector<int>& nums){
        if(ind==nums.size()){
           
            return;
        }
        for(int i=ind;i<nums.size();i++){
            v.push_back(nums[i]);
            ans.push_back(v);
             solve(i+1,v,ans,nums);
            v.pop_back();
        }
       
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
        vector<int>v;
        ans.push_back(v);
  solve(0,v,ans,nums);
        return ans;
    }
};