class Solution {
public:
    int minDominoRotations(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>mp;
        int ans=-1,n=a.size();
        vector<int>cnt1(7,0),cnt2(7,0),same(7,0);
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]) same[a[i]]++;
                cnt1[a[i]]++;
                cnt2[b[i]]++;
        }
        for(int i=1;i<=6;i++){
            if(cnt1[i]+cnt2[i]-same[i]==n){
                return n-max(cnt1[i],cnt2[i]);
            }
        }
        return -1;
    }
};