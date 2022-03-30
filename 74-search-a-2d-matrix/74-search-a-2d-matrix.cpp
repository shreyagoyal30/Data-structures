class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
     int l=0;
         int hi = (n * m) - 1;
       while(l<=hi){
          int mid=l+(hi-l)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]<target)
              l=mid+1;
            else
               hi=mid-1;
        }
        return false;
   }
};