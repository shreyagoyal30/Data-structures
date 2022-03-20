// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        int n=a.length();
      int freq[26];
      memset(freq,-1,sizeof(freq));
      for(int i=0;i<n;i++){
          if(freq[a[i]-'a']==-1) 
          freq[a[i]-'a']=i;
    }
    int i=0,j=0;
    for( i=0;i<n;i++){
        bool flag=false;
        for( j=0;j<a[i]-'a';j++){
            //small character appering later so we will replace it 
            if(freq[j]>freq[a[i]-'a']) {
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(i<n){
        char ch1=a[i];
       char ch2=char(j+'a');
       for( i=0;i<n;i++){
           if(a[i]==ch1)
           a[i]=ch2;
           else if(a[i]==ch2)
              a[i]=ch1;
       }
       
       }
       return a;
   }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends