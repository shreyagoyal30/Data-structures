class Solution {
public:
//   We start from the second last index and increase minjump by 1 for each position. If at a particular index, the maximum jump length at that position is greater than or equal to the minimum jump length required, i.e., nums[i]>=minjump, then we can say that we can reach the last index from that position. Thus, we reduce the minimum jump length required to zero if the condition is satisfied so that for the next position when iterating backwards the minimum jump length required is 1 after incrementation.//


//     bool canJump(vector<int>& nums) {
      
//         int minjump=0;
//       for(int i=nums.size()-2;i>=0;i--){
//         minjump++;
//         if(nums[i]>=minjump)
//           minjump=0;
//       }
//       if(minjump==0) 
//         return true;
//       else
//       return false;
//     }
   bool canJump(vector<int>& nums) {
      
        int minjump=0,n=nums.size();
    int i=0;
     for(int maxind=0; i<n && i<=maxind;i++){
       int ind=i+nums[i];
       maxind=max(maxind,ind);
      
     }
     return i==n;
   }
};