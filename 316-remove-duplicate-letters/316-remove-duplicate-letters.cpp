class Solution {
public:
    string removeDuplicateLetters(string s) {
       vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        string res="";
        vector<bool>is_present(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']--;
            if(!is_present[s[i]-'a']){
                while(res.size()>0 && res.back()>s[i] && freq[res.back()-'a']>0){
                     is_present[res.back()-'a']=false;
                    res.pop_back();
                   
                }
                 res+=(s[i]);
             is_present[s[i]-'a']=true;
            }
           
        }
        return res;
    }
};