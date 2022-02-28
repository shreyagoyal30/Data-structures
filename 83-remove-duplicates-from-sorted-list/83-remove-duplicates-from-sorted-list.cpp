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
    ListNode* deleteDuplicates(ListNode* head) {
      if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head,*nex=NULL;
      while(temp->next->next){
        nex=temp->next;
        if(temp->val==nex->val){
          temp->next=nex->next;
          nex->next=NULL;
          // delete(nex);
        }
        else{
          temp=nex;
        }
      }
      if(!temp->next->next){

        if(temp->val==temp->next->val){
          temp->next=NULL;
         
           // delete(nex);
        }
      }
      return head;
    }
};