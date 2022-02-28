class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(right,nums)-count(left-1,nums);
    }
  int count(int bound,vector<int>& nums){
    int l=0,cnt=0;
    for(int i=0;i<nums.size();i++){
      if(nums[i]<=bound){
        cnt+=i-l+1;
      }
      else l=i+1;
    }
    return cnt;
  }
};