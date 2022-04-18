class Solution {
public:
    void solve(int ind,string digits, vector<string>&ans,string cur,map<char,string>mp){
        if(ind==digits.size()){
            ans.push_back(cur);
            return;
        }
        string indstr=mp[digits[ind]];
        for(int i=0;i<indstr.length();i++){
            cur.push_back(indstr[i]);
               solve(ind+1,digits,ans,cur,mp);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char,string>mp={
            {'1',""},
               {'2',"abc"},
              {'3',"def"},
              {'4',"ghi"},
              {'5',"jkl"},
              {'6',"mno"},
              {'7',"pqrs"},
              {'8',"tuv"},
              {'9',"wxyz"},
              
        };
        vector<string> ans;
         if(digits.size()==0) return ans;
      
        string cur="";
        solve(0,digits,ans,cur,mp);
        return ans;
    }
};