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
    ListNode* rotateRight(ListNode* head, int k) {
       if(!head || !head->next|| k==0) return head;
      ListNode* lastnode=head;
       ListNode* newendnoad=head;
      int len=1;
      
      while(lastnode->next!=NULL){
        len++;
        lastnode=lastnode->next;
      }
      k=k%len;
    if(k==0) return head;
      for(int i=1;i<len-k;i++)
        newendnoad=newendnoad->next;
      
       ListNode* newhead=newendnoad->next;
      newendnoad->next=NULL;
            lastnode->next=head;

      return newhead;
    }
};