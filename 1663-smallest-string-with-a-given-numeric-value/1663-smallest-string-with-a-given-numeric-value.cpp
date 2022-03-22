class Solution {
public:
    string getSmallestString(int n, int k) {
       string ans="";
        map<int,char>mp;
        int i=1;
        for(char c='a';c<='z';c++){
            mp[i]=c;
            i++;
        }
        for(int i=n-1;i>=0;i--){
          int remaining=k-i;
          if(remaining>=26){
              ans+='z';
              k-=26;
          }  
            else{
            ans+=mp[remaining];
            k-=remaining    ;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};