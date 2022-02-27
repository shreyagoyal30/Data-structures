// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        unordered_map<char,int>mp;
        int i=0,n=s.length(),j=0;
        int mini=INT_MAX;
        
        while(j<n){
           mp[s[j]]++;
               if(mp.size()==3) {
                   while(mp.size()==3){
                   mini=min(mini,j-i+1);
                   mp[s[i]]--;
                  if(mp[s[i]]==0) mp.erase(s[i]);
                   i++;
               }
               }
               j++;
           }
        
            
        return mini==INT_MAX?-1:mini;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends