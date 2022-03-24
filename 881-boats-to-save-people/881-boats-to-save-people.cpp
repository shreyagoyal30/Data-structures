class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        sort(a.begin(),a.end());
        int ans=0,n=a.size();
        int i=0,j=n-1;
        while(i<=j){
            ans++;
            if(a[j]<=limit-a[i]) i++;
            j--;
        }
        
        return ans;
    }
};