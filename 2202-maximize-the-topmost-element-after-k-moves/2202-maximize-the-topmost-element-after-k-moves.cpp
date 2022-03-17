class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return nums[0];
        if(k==1) return n==1?-1:nums[1];
        if(n==1) return k%2==0?nums[0]:-1;
        int mx=0;
        for(int i=0;i<min(n,k-1);i++){
            mx=max(nums[i],mx);
        }
        // int mx=*max_element(nums.begin(),nums.begin()+min(n,k-1));
        if(k<n) mx=max(nums[k],mx);
        return mx;
    }
};