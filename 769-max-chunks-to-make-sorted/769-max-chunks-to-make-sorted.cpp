class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int>st;
      st.push(arr[0]);
      for(int i=1;i<arr.size();i++){
        if(arr[i]>st.top()) st.push(arr[i]);
        else{
          int largest=arr[i];
          while(!st.empty() && arr[i]<st.top()){
            largest=max(largest,st.top());
            st.pop();
          }
          st.push(largest);
        }
      }
      return st.size();
    }
};