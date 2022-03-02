// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string s)
    {
        // code here
       
        int n=s.length();
    long long total_combo= 1LL*n*(n-1)/2;
    long long y=0;
    long long a[26]={0};
    for(auto x:s) a[x-'a']++;
    for(int i=0;i<26;i++){
        if(a[i]>1) {total_combo-=a[i]*(a[i]-1)/2*1LL;
        y++;}
    }
    return y==0?total_combo:total_combo+1;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends