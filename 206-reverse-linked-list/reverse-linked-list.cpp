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
    ListNode* reverseList(ListNode* head) {
    int x;
    int i=0;
    ListNode* temp;
    
   while(head!=NULL){
    x=head->val;
    if(i==0){
        temp= new ListNode(x);
    }
    else{
       ListNode *BC=new ListNode(x);
        BC->next=temp;
        temp=BC;
    }
    head=head->next;
    i+=1;
    }
   return temp;
    }
};