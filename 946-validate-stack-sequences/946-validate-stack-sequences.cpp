class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n=popped.size();
        int j=0;
        for(int i=0;i<n;i++){
            while(j<n &&(st.empty() || st.top()!=popped[i])){
                st.push(pushed[j]);
                j++;
            } 
            if(st.top()==popped[i])
                st.pop();
            else return false;
         }
        return true;
    }
};