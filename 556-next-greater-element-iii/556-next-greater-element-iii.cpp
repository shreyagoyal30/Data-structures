class Solution {
public:
    int nextGreaterElement(int num) {
        string s=to_string(num);
      int n=s.length();
      int i=n-2;
      //breakdown pt
      while(i>=0 && s[i]>=s[i+1]) i--;
      //just greater of breakdown to replace
       if(i>=0){
        int j=n-1;
        while(s[j]<=s[i]) j--;
        swap(s,i,j);
       }
      reverse(s,i+1);
      // cout<<s<<endl;
      int x= stoll(s);
      // cout<<x<<endl;
      if(x>num) return x;
      else return -1;
    }
    void reverse(string &s,int start){
    int i = start, j = s.length() - 1;
        while (i < j) {
            swap(s, i, j);
            i++;
            j--;
        }
  }
  void swap(string &nums ,int i ,int j){
    int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
  }
  
};