class Solution {
public:
    //() valid string
    //()()-these two are individual.nothing to do with each other
    
    // I will assume you are at last parenthesis
    //()- i have score 0. not a valid string under me final ans=1;
    // (())-i have 1 string under me ans=2*1;
     // (()())-i have 2 string under me ans=2*2;
    //(()(()))-i have two child both are individual.1st-() ans1=1,2nd-(()) ans=2 total child=1+2=3 final ans=2*3=6; 
    //first try all cases on your own
    int scoreOfParentheses(string s) {
        stack<int>st;
    int score=0;
        for(auto x:s){
            if(x=='('){
             //score means how many valid strings are under me
                st.push(score);
                score=0;
            }
            else{
                score=st.top()+max(2*score,1);
                st.pop();
            }
        }
        return score;
    }
};