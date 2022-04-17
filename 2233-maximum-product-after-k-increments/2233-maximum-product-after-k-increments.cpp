class Solution {
public:
    int mod=1e9+7;
    int product(vector<int>& nums){
        long long ans=1;
        for(auto i:nums) ans=(ans*i)%mod;
                        // ans=ans%mod; }
        return ans%mod;
    }
    int maximumProduct(vector<int>& nums, int k) {
        // priority_queue<pair<int,int>>pq;
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(k--){
            auto top=pq.top();
            pq.pop();
            int ind=top.second;
            nums[ind]++;
             pq.push({nums[ind],ind});
        }
        return product(nums);
    }
};