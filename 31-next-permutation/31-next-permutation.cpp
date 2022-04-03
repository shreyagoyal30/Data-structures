class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //step 1-(traversing back) find which  indexelement is less than its next index eg 1 3 5 4 2 in this index 2 is greater than index 1 so index=1
      int n=nums.size();
      int i=n-2;
      while(i>=0 &&nums[i]>=nums[i+1]){
        i--;
      }
      if(i>=0){
  //step 2-(traversing back)now find which element is greater than nums[i]
        int j=n-1;
        while(nums[j]<=nums[i]){
          j--;
        }
        swap(nums,i,j);
      }
      //after index all are in descending oredr and we want lower rank so reverse it
      reverse(nums,i+1);
    }
  void reverse(vector<int>& nums,int start){
    int i = start, j = nums.size() - 1;
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
  }
  void swap(vector<int>& nums,int i ,int j){
    int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
  }
  
};