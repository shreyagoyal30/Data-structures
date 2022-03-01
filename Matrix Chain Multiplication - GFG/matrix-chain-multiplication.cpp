// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
     int dp[100][100];
public:
int matrixMultiplication(int n, int arr[])
    {
        // code here
      
       memset(dp,-1,sizeof dp);
       
        return f(1,n-1,arr);
    }
int f(int i,int j,int arr[]){
    if(i==j)return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini=INT_MAX;
    dp[i][j]=INT_MAX;
    for(int k=i;k<j;k++){
        int steps=f(i,k,arr)+f(k+1,j,arr)+arr[i-1]*arr[k]*arr[j];
       dp[i][j]=min(dp[i][j],steps);
    }
    return dp[i][j];
}
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends