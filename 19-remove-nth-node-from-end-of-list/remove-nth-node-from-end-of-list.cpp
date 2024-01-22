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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* temp=head;
     int c=0;
     while(temp!=NULL){
         temp=temp->next;
         c+=1;
     }
     c=c-n;
     if(c==0){
        return head->next;
     }
    ListNode* temp1=head;
    while(c>1){
        
        temp1=temp1->next;
        c-=1;
        cout<<temp1->val;
    }
    if(temp1->next!=NULL)
    {
        temp1->next=temp1->next->next;
    }
    else temp1->next=NULL;
    return head;
    }
};