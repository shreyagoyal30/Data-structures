class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string s) {
        vector<int>order(27,0);
        for(int i=0;i<s.length();i++){
            order[s[i]-'a']=i;
        }
        for(int j=1;j<words.size();j++){
            //if 2nd is greater than 1
            if(isbigger(words[j-1],words[j],order)) return false;
            
        }
        return true;
    }
bool isbigger(string s1,string s2,vector<int>&order){
    int n=s1.length(),m=s2.length();
    for(int i=0;i<n &&i<m ;i++){
        if(order[s1[i]-'a']!=order[s2[i]-'a'])
            return order[s1[i]-'a']>order[s2[i]-'a'];
    }
    return n>m;
}
};