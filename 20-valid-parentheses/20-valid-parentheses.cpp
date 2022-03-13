class Solution {
public:
    char reverse(char it){
          if(it==')') return '(';
       else if(it==']') return '[';
        return '{';
    }
    bool isValid(string s) {
        stack<int>st;
        for(auto it:s){
            if(it=='(' ||it=='[' ||it=='{') st.push(it);
            else{
                if(st.empty()) return false;
              else  if(st.top()!=reverse(it)) return false;
                else st.pop();
            }
        }
          if(!st.empty()) return false;
        return true;
    }
};