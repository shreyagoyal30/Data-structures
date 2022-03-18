// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minSteps(int A[], int n, int k) {
        // code here
        int ans=INT_MAX;
        sort(A,A+n);
            vector<int>prefix(n);
            prefix[0]=A[0];
            for(int i=1;i<n;i++){
                prefix[i]=prefix[i-1]+A[i];
            }
            int prev=0;
            for(int i=0;i<n;i++){
                int c=1;
                while(i+1<n && A[i]==A[i+1]){
                    c++;
                    i++;
                    // continue;
                }
                int permissible=A[i]+k;
                int ind=upper_bound(A,A+n,permissible)-A;
                int actualsum=prefix[n-1]-prefix[ind-1];
                int reduce=(n-ind)*permissible;
                actualsum-=reduce;
                ans=min(ans,actualsum+prev);
                prev+=c*A[i];
            }
            return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin>>N>>K;
        
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.minSteps(A,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends