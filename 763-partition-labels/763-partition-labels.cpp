class Solution {
public:
    void f(int start,string s,vector<int>&ans,vector<int> last){
        if(start>=s.length()) return;
        
       int end=last[s[start]-'a'];
        for(int i=start;i<=end;i++){
            if(last[s[i]-'a']>end) end=last[s[i]-'a'];
        }
        ans.push_back(end-start+1);
        f(end+1,s,ans,last);
        return;
    }
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<int> last(26);
        for(int i=0;i<s.length();i++) 
            last[s[i]-'a']=i;
        int start=0;
        int end=last[s[0]-'a'];
        f(start,s,ans,last);
        return ans;
    }
};