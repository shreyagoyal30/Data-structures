/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter=head,*next;
      
      // First round: make copy of each node,
  // and link them together side-by-side in a single list.
      while(iter!=NULL){
        next= iter->next;
        Node* copy=new Node(iter->val);
        iter->next=copy;
        copy->next=next;
        
        iter=next;
      }
      
      // Second round: assign random pointers for the copy nodes.
  iter = head;
      while(iter!=NULL){
        if(iter->random!=NULL){
          iter->next->random=iter->random->next;
        }
        iter=iter->next->next;
      }
      
      // Third round: restore the original list, and extract the copy list.
 
       iter = head;
      Node* pseudoHead = new Node(0);
      Node* copy, *copyitr = pseudoHead;
      
       while(iter!=NULL){
         next=iter->next->next;
         
         copy=iter->next;
         copyitr->next=copy;
         copyitr=copy;
         
         // restore the original list
    iter->next = next;

    iter = next;
       }
      return pseudoHead->next;
    }
};