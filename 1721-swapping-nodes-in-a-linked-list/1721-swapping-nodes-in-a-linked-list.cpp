/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* swapNodes(ListNode* head, int k) {
       ListNode* temp=head;
        for(int i=0;i<k-1;i++)
          temp=temp->next;
       ListNode* swap1=temp;
       ListNode* swap2=head;
      while(temp->next){
        temp=temp->next;
        swap2=swap2->next;
      }
      swap(swap1->val,swap2->val);
      // int t=swap1->val;
      // swap1->val=swap2->val;
      //   swap1->val=t;
      return head;
    }
  
};