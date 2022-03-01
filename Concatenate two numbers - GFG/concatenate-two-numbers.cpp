// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

// here im converting the x into string and i'm making
// substrings into left and right and then i'm adding it to 
// answer by checking the availability of pairs . if that 
// substring is not present in map it will return 0 ; and 
// as i was doing multiplication the net will become zero 
// and if left == right then it will be n*n-1 because we are
// not including the i==j case (12) here we cant use 12 two times 
// to produce 1212. 
class Solution{
    public:
    
    long long countPairs(int n, int X, vector<int> numbers){
        // code here
        long long ans=0;
        map<string,int>mp;
        for(auto x:numbers) mp[to_string(x)]++;
        string s=to_string(X);
        string res="";
        for(int i=0;i<s.length();i++){
            char c=s[i];
            res+=c;
            if(res!=s.substr(i+1)) ans+=mp[res]*mp[s.substr(i+1)];
            else ans+=mp[res]*(mp[res]-1);
        }
         return ans;
        }
    
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends