class Solution {
public:
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right){
            
            if(s.at(left)!=s.at(right)){
                int i=left+1,j=right-1;
//case1  
                while(i<right && s.at(i)==s.at(right)){
                i++;
                right--;
            }
//case2  
                while(left<j && s.at(left)==s.at(j)){
                left++;
                j--;
        }
       
            return i>=right||left>=j;
            }
                 left++;
        right--;
        }
        return true;
    }
};