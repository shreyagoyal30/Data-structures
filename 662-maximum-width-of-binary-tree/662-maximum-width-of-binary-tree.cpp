/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
       queue<pair<TreeNode*,int>>q;
      q.push({root,0});
      int ans=1;
      while(!q.empty()){
        int size=q.size();
        int first=0,last=0;
        
        for(int i=0;i<size;i++){
          TreeNode* node=q.front().first;
          int val=q.front().second;
          q.pop();
          
          if(i==0) first=val;
          if(i==size-1) last=val;
          
          if(node->left) q.push({node->left,1LL*2*(val-first)});
           if(node->right) q.push({node->right,1LL*2*(val-first)+1});
        }
        ans=max(ans,last-first+1);
      }
      return ans;
    }
};